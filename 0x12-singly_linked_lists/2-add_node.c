#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *add_node - Creates and adds a new node into the list
 *@head: Pointer to the head oh the linst
 *@str: string to assign the node
 *Return: Pointer to the head of the linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	while (str[i])
		i++;

	list_t *newNodo;

	newNodo = malloc(sizeof(list_t));
	if (newNodo == NULL)
	return (NULL);

	newNodo->str = strdup(str);
	newNodo->len = i;
	newNodo->next = *head;
	*head = newNodo;
	return (*head);
}
