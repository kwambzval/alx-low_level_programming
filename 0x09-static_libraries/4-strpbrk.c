#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: string containing the bytes to search for
 *
 * Return: If a byte from the accept string is found, return a pointer to the
 *         byte in s; otherwise, return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}

