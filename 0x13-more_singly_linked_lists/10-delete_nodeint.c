#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: pointer to list
 * @index: position node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	unsigned int i = 0;
	listint_t *old = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			old->next = current->next;
			free(current);
			return (1);
		}
		old = current;
		current = current->next;
		i++;
	}
	return (-1);
}
