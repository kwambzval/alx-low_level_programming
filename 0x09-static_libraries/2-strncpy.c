#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a number of bytes of a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 *
 * Return: the pointer of the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_ptr);
}

