#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted
 * singly linked list using Jump search.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if value
 *         is not present or list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev;
	listint_t *node, *jump;
	size_t i;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	node = list;

	while (node->index < size && node->n < value)
	{
		prev = node->index;
		jump = node;
		for (i = 0; i < step && jump->next != NULL; i++)
			jump = jump->next;
		printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);

		if (jump->n >= value)
			break;
		node = jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump->index);

	while (node != NULL && node->index <= jump->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}

