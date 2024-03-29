#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: A pointer to the address of the head of the list_t.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}

