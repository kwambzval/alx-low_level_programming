#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 *         The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current;

	if (h == NULL)
		return (count);
	while (*h != NULL)
	{
		count++;
		if (*h <= (*h)->next)
		{
			temp = *h;
			*h = NULL;
			free(temp);
			break;
		}
		current = *h;
		*h = (*h)->next;
		free(current);
	}
	return (0);
}

