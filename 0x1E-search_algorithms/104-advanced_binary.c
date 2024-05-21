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
 * advanced_binary_helper - Recursively searches for a value in a sorted
 * array using binary search
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the subarray to search in
 * @high: Ending index of the subarray to search in
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not
 * present or array is NULL
 */
int advanced_binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_helper(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_helper(array, mid + 1, high, value));
	else
		return (advanced_binary_helper(array, low, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array using the
 * advanced binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value
 * is not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_helper(array, 0, size - 1, value));
}

