#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * error_usage - Handles the error message for incorrect usage.
 * Return: No return value.
 */
void error_usage(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_read - Handles the error message when unable to read from a file.
 * @file: The name of the file.
 * Return: No return value.
 */
void error_read(char *file)
{
	dprintf(1, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * error_write - Handles the error message when unable to write to a file.
 * @file: The name of the file.
 * Return: No return value.
 */
void error_write(char *file)
{
	dprintf(1, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * error_close - Handles the error message when
 * unable to close a file descriptor.
 * @fd: The file descriptor.
 * Return: No return value.
 */
void error_close(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_result, write_result;
	char buffer[1024];

	if (argc != 3)
		error_usage();

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_read(argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_write(argv[2]);

	while ((read_result = read(file_from, buffer, 1024)) > 0)
	{
		write_result = write(file_to, buffer, read_result);
		if (write_result == -1)
			error_write(argv[2]);
	}

	if (read_result == -1)
		error_read(argv[1]);

	if (close(file_from) == -1 || close(file_to) == -1)
		error_close((close(file_from) == -1) ? file_from : file_to);

	return (0);
}

