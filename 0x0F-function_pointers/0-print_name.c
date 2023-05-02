#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Calls a function on a given name string
 *
 * @name: The name string to pass to the function
 * @f: A function that takes a string as its argument and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print - Prints a given string to the console
 *
 * @name: The string to print
 */
void print(char *name)
{
	printf("%s\n", name);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	char *name = "John Doe";

	print_name(name, print);
	return (0);
}
