#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the first node of the listint_t list
 *@idx: index position of the node to be inserted
 *@n: value of the new node
 *Return: the listint_t list after the new node has been inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	while (i < idx - 1)
	{
		if (temp == 0)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
