#include "main.h"

/**
 * malloc_checked - malloc memory allocation.
 * @b: Number of bytes to alloacate.
 *
 * Return: Pointer to the allocated memory else 98 if fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
