#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char buffer;
	ssize_t total_read = 0;
	ssize_t read_result, write_result;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	while (letters > 0)
	{
		read_result = read(file_descriptor, &buffer, 1);
		if (read_result == -1)
		{
			close(file_descriptor);
			return (0); /* Error reading from the file */
		}

		if (read_result == 0)
			break; /* End of file reached */

		write_result = write(STDOUT_FILENO, &buffer, 1);
		if (write_result == -1)
		{
			close(file_descriptor);
			return (0); /* Error writing to standard output */
		}

		letters--;
		total_read++;
	}

	close(file_descriptor);
	return (total_read);
}

