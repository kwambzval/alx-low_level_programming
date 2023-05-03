#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * create_array - creates array of chars and initializes it with char.
 *
 * @size: the size of the array to create.
 * @c: the char to initialize the array with.
 *
 * Return: If size is 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

