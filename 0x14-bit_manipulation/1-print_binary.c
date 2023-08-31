#include "main.h"

/**
 * print_binary - Printst the binary rep of a num
 * @num: The num
 */

void print_binary(unsigned long int num)
{
	if (num <= 1)
	{
		_putchar(num + '0');
		return;
	}

	print_binary(num >> 1);
	_putchar((num & 1) + '0');
}
