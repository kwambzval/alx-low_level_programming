#include "main.h"

/**
 * set_bit - Sets the val of a bit to 1
 * @num_ptr: A ptr to the num whose bit is to be set
 * @pos: The index[0] of the bit to set
 *
 * Return: 1 on success else -1
 */
int set_bit(unsigned long int *num_ptr, unsigned int pos)
{
	if (pos >= sizeof(*num_ptr) * 8)
		return (-1);

	*num_ptr |= (1UL << pos);
	return (1);
}
