#include "lists.h"

/**
 *free_listint - Frees a list of nodes
 *@head: Pointer to the first element of the list
 */

void free_listint(listint_t *head)
{
	listint_t *toFree;

	while (head != NULL)
	{
		toFree = head;
		head = toFree->next;
		free(toFree);
	}
}
