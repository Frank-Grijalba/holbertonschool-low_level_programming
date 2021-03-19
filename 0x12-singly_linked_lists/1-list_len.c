#include "lists.h"

/**
 *list_len - Calculates the lenght of a linked list
 *@h: pointer to the head of the linked list
 *Return: The total number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	} else
	{
		return (0);
	}
	return (i);
}
