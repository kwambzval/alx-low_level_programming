#include <stdio.h>
#include "main.h"

/**
 * factorial - Prints the factorial of a number
 * @n: The number to find factorial of
 *
 * Return: The factorial of a number or an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
