/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element for which cmp doesn't return 0
 *         -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
	}

	return (-1);
}

