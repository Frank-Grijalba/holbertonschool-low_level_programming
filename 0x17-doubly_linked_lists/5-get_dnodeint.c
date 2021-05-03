#include "lists.h"

/**
 *get_dnodeint_at_index - Returns the Xth node of a linked list
 *@head: Pointer to the head of the list
 *@index: Index of nodes
 *Return: A given node if fount in the index, if not, NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (!head)
	return (NULL);

	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
