#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory space pinted to with b
 * @s: the memory area
 * @b: the consant byte
 * @n: the number of bytes
 *
 * Return: the poimter to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (ptr);
}

