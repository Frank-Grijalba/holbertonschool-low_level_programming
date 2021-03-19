#include "lists.h"

/**
 *free_list - Frees a list of nodes
 *@head: Pointer to the first element of the list
 */

void free_list(list_t *head)
{
	list_t *toFree;

	while (head != NULL)
	{
		toFree = head;
		head = toFree->next;
		free(toFree->str);
		free(toFree);
	}
}
