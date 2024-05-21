#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @low: Starting index
 * @high: Ending index
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search_helper - Searches for a value in a sorted array
 * using binary search
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the subarray to search in
 * @high: Ending index of the subarray to search in
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1
 * if value is not present or array is NULL
 */
int binary_search_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using the
 * exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value
 * is not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search_helper(array, low, high, value));
}

