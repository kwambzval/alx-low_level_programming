#include <stdio.h>
#include "main.h"

/**
 * _strspn - Calculates the length of s which consists of bytes in accept
 * @s: input string
 * @accept: string containing the bytes to match
 *
 * Return: The number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		if (match == 0)
			break;
		s++;
	}

	return (count);
}

