#include "lists.h"
#include <stdio.h>
/**
 *print_list - Prints all the elements of a linked list
 *@h: Pointer to the head of the list
 *Return: The number of total nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
