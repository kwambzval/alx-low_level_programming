#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i > left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

