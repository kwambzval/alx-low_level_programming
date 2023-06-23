#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a string
 * @name: The name to be printed
 * @f: a function that takes the name as its argument and return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

