#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: list
 * @n: new node to bt add
 *
 * File: 3-add_nodeint_end.c
 * Auth: Zuhair Ahmed
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}

