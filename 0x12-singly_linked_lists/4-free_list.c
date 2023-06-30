#include "list.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: Head pointer of a linked list
 *
 * Description: This function frees each node of a linked list, starting from
 * the head node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

