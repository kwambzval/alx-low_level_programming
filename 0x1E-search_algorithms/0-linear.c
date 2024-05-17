#include <stdio.h>
#include <stddef.h>
/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first 'value' in 'array', or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
int main(void)
{
	int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n", 3, linear_search(array, size, 3));
	printf("Found %d at index: %d\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

	return (0);
}

