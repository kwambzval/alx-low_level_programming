#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if value is not present
 * or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (prev + step >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, size - 1);
			break;
		}

		if (array[prev + step] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);
			break;
		}
		prev += step;
	}

	while (prev < size && array[prev] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (array[prev] == value)
			return (prev);

		prev++;
	}

	return (-1);
}

