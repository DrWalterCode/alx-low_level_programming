#include "lists.h"
#include <stdlib.h>

/**
 * Will free a listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
