#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - Adds a node at the end of a linked list.
 * @head: pointer to the first node of a linked list.
 * @str: String to include in the node.
 * Return: A pointer to the head of the linked list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	while (str[i])
	i++;

	list_t *newNodo, *temp;

	temp = *head;
	newNodo = malloc(sizeof(list_t));

	if (newNodo == NULL)
		return (NULL);

	newNodo->str = strdup(str);
	newNodo->len = i;
	newNodo->next = NULL;

	if (*head == NULL)
	{
		*head = newNodo;
		return (newNodo);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNodo;
	return (*head);
}
