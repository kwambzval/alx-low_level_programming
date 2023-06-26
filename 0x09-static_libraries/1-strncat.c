#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates a number of bytes of a string
 * @n: the number
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the pointer to the result
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_ptr);
}

