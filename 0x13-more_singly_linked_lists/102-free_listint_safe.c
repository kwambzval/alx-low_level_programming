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
	size_t i = 0;
	listint_t *temp, *current;

	if (h == NULL || *h == NULL)
		return (i);

	current = *h;

	while (current != NULL)
	{
		i++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
			break;
	}

	*h = NULL;

	return (i);
}

