#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints characters of a string in reverse
 * @s: Character of the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
