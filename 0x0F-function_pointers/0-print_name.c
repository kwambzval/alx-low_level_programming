#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - prints a name as is
 *@name: name of the person
 *@f: function pointer
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
