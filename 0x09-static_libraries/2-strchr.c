#include <stdio.h>
#include "main.h"

/**
 * _strchr - finds the first occurrence of a character in a string
 * @s: The input string
 * @c: The character to locate
 *
 * Return: If the character is found, return a pointer to the first occurrence;
 *         otherwise, return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (*s == c ? s : NULL);
}

