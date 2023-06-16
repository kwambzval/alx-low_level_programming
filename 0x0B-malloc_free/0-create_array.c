#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters, initialises it with a char
 * @size: The size in bytes of the array
 * @c: The character that initializes the array
 *
 * Return: A pointer to the array or NULL when it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0, i < size, i, i++)
	{
		array[i] = c;
	}

	return (array);
}

