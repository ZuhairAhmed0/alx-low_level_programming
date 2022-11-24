#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the beginning of a list
 * @head: the first node
 * @str: the node to be add
 *
 * File: 3-add_node_end.c
 * Auth: Zuhair Ahmed
 *
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	char *dup;
	int len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (str[len])
		len++;

	newNode->str = dup;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}
	return (*head);
}
