#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file with the given text content.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_result = 0;
	int close_result;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[write_result])
			write_result++;
		write_result = write(file_descriptor, text_content, write_result);
	}

	close_result = close(file_descriptor);

	if (write_result == -1 || close_result == -1)
		return (-1);

	return (1);
}

