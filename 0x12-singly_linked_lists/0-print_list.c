#include "lists.h"
#include <stdio.h>
#include <stdlib>
/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: Head pointer of a linked list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}

