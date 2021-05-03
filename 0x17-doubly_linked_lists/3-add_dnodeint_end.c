#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to a linked list
 * @n: value to insert
 * Return: address of node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		new->next = NULL;
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
