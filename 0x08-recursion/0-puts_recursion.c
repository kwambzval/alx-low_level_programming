#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints characters of a string
 * @s: the character of the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n");
		return(0);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

