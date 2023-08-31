#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip
 * @num1: The 1st num
 * @num2: The 2nd num
 *
 * Return: The num  of bits to flip
 */

unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int xor_result = num1 ^ num2;
	unsigned int flip_count = 0;

	while (xor_result)
	{
		flip_count += xor_result & 1;
		xor_result >>= 1;
	}

	return (flip_count);
}
