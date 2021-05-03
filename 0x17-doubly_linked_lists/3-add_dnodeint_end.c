#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to a linked list
 * @n: value to insert
 * Return: address of node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	if (!head)
		return (NULL);

	tmp = *head;
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	if (!*head)
	{
		*head = new;
		return (new);
	}
	new->next = NULL;
	new->n = n;

	while (tmp->next != NULL)
	tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;
	return (new);
}
