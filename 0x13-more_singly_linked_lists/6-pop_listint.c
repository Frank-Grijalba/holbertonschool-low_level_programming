#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list, and returns
 *		the head node’s data (n)
 *@head: pointer to the linked list's head
 *Return: the value of the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (*head != NULL)
	{
		n = tmp->n;
		free(*head);
		*head = tmp->next;
		return (n);
	}
	return (0);
}
