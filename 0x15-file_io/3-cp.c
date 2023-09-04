#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUFSIZE 1024

/**
 * exit_with_error - exits the program with an error message
 * @exit_code: the exit code to use
 * @message: the error message to display
 */
void exit_with_error(int exit_code, const char *message)
{
	ssize_t len = strlen(message);

	if (write(STDERR_FILENO, message, len) !=
			len || write(STDERR_FILENO, "\n", 1) != 1)
	{
		exit(100);
	}
	exit(exit_code);
}

/**
 * main - entry point of the program
 * @argc: the number of arguments
 * @argv: an array of arguments
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFSIZE];

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		exit_with_error(98, "Error: Can't read from file");

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
		exit_with_error(99, "Error: Can't write to file");

	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			exit_with_error(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		exit_with_error(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		exit_with_error(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		exit_with_error(100, "Error: Can't close fd");
	return (0);
}

