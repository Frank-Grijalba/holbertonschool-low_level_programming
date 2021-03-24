#include "lists.h"

/**
 *free_listint2 - Frees a list of nodes
 *@head: Pointer to the first element of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *toFree;
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		toFree = (*head)->next;
		free(*head);
		*head = toFree;
	}
	*head = NULL;
}
