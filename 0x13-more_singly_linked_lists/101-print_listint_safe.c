#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *loop_node;

	current = head;
	loop_node = NULL;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current > current->next)
		{
			loop_node = current->next;
			break;
		}

		current = current->next;
	}

	if (loop_node != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		exit(98);
	}

	return (count);
}

