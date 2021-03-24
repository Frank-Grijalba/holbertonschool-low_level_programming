#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: pointer to the listint_t list
 *@index: index of the node
 *Return: NULL is the node at index doesn't exists, the node at index otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if(head == NULL)
	{
		return NULL;
	}else
	{
		listint_t *pointer = head;
		unsigned int pos = 0;
		while (pos < index && pointer->next)
		{
			pointer = pointer->next;
			pos++;
		}
		if (pos != index)
		{
			return NULL;
		}else
		{
			return (pointer);
		}
	}
}
