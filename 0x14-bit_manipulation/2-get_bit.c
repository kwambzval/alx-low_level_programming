#include "main.h"

/**
 * get_bit - Returns the val of a bit at a given index
 * @num: The num whose bit is retrieved
 * @pos: The index[0]
 *
 * Return: The val of the bit at [pos]
 */

int get_bit(unsigned long int num, unsigned int pos)
{
	if (pos >= sizeof(num) * 8)
		return (-1);

	return ((num >> pos) & 1);
}
