#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Prints the power of an number
 * @x: The number to be powered
 * @y: The number to be used as the power
 *
 * Return: The power of x
 */

int _pow_recursion(int x, int y)
{
	int i;
	int result;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	for (i = 0; i <= y; i++)
	{
		result *= x;
	}
	return (result);
}
