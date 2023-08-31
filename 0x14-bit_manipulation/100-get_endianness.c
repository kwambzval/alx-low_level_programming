#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if it is little endian.
 */

int get_endianness(void)
{
	unsigned int number = 1;
	char *byte_pointer = (char *)&number;

	if (*byte_pointer)
		return (1);/* Little endian */
	else
		return (0);/* Big endian */
}
