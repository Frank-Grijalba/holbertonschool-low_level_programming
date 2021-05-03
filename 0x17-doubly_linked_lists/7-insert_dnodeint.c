#include "lists.h"

/**
 * dlistint_len - return length of list
 * @h: pointer to list
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (!h)
	return (0);

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t list to insert node into
 * @idx: index to insert node at
 * @n: value of n for the node to be inserted
 * Return: the address of the new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, len = dlistint_len(*h);
	dlistint_t *tmp = *h, *new = NULL;

	if (!h)
	return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
	return (NULL);

	if (idx == len)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	if (idx > len)
	{
		free(new);
		return (NULL);
	}

	for (i = 1; i < idx; i++)
	{
		tmp = tmp->next;
	}
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
