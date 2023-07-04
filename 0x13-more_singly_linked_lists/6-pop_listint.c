#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Removes the head node of a listint_t list and returns its data
 * @head: Double pointer to the head node of the list
 *
 * Return: The data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}

