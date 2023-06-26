#include <stdio.h>
#include "main.h"

/**
 * _strlen - measures the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s)
	{
		lenght++;
		s++;
	}

	return (lenght);
}

