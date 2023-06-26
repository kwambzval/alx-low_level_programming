#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string to another
 * @dest: where the string is to be copies to
 * @src: where the string is copied from
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_ptr);
}

