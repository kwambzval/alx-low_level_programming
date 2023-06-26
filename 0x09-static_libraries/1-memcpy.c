#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies a number of bytes from src to dest
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (dest_ptr);
}

