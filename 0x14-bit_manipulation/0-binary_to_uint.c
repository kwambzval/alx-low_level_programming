#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -a function that converts a binary number to an unsigned int.
 * @b: a pointer to a character in a string
 *
 * Return: the converted number or 0 if the string b is not 0 or 1
 * or b is NUll
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int new = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	while (b[x])
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		new = (new << 1) + (b[x] - '0');
		x++;
	}
	return (new);
}

