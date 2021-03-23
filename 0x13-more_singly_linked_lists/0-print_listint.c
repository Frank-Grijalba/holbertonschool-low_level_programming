#include "lists.h"
#include <stdio.h>
/**
 *print_listint - Prints all the elements of a linked list
 *@h: Pointer to the head of the list
 *Return: The number of total nodes in the list
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (count);
}
