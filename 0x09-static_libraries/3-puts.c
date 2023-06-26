#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string in stdout
 * @s: the input string to be printed
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

