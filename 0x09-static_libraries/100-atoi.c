#include <stdio.h>
#include "main.h"

/**
 * _atoi - makes a string an integer
 * @s: the string
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result > 0)
			break;

		s++;
	}

	return (result * sign);
}
