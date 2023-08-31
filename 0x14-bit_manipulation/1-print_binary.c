#include "main.h"
/**
 * print_binary - prints the binary represantation of a number.
 * @: a number
 *
 * Return: Binary representation of a number
 */

void print_binary(unsigned long int n)
{
	unsingned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) || flag)
		{
			if (n & mask)
				_putchar('1');
			else
				_putchar('0');
			flag = 1;
		}
		mask >>= 1;
	}
}

