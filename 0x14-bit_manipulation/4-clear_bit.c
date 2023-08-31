#include "main.h"

/**
 * clear_bit - Sets the val of a bit to 0 at []
 * @num_ptr: A pointer to the num(bit)
 * @pos: The index[0]
 *
 * Return: 1 on success else -1
 */

int clear_bit(unsigned long int *num_ptr, unsigned int pos)
{
	if (pos >= sizeof(*num_ptr) * 8)
		return (-1);

	*num_ptr &= ~(1UL << pos);
	return (1);
}
