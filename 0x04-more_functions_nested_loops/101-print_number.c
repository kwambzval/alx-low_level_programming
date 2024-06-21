#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num;
	unsigned int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
	}
}

