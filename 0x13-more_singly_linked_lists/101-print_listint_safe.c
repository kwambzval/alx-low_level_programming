#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *snode;
	size_t count = 0;

	if (!head)
		exit(98);

	node = head;
	while (node)
	{
		snode = node + 1;
		printf("[%p] %d\n", (void *)node, node->n);
		count++;
		if (snode >= node)
			node = node->next;
		else
			break;
	}
	if (node)
		printf("-> [%p] %d\n", (void *)node, node->n);
	return (count);
}

