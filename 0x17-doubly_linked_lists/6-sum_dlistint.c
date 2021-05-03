#include "lists.h"

/**
 *sum_dlistint - Calculates and sums all the data of a linked list
 *@head: Pointer to the head of a list
 *Return: The sum of all elements in a linked list or 0 if no elements
 */

int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n = n + head->n;
		head = head->next;
	}
	return (n);
}
