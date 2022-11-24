#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: the first node
 * @str: the node to be add
 *
 * File: 2-add_node.c
 * Auth: Zuhair Ahmed
 *
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
