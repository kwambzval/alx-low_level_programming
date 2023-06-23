#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to be used on each array
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

