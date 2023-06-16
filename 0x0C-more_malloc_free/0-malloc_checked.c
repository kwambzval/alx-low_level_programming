#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - memory allocation using malloc
 * @b: Number of bytes to be alloacate
 *
 * Return: Pointer to the allocated memory or 98 if fails.
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

