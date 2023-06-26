#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the concatenation of strings
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_ptr);
}

