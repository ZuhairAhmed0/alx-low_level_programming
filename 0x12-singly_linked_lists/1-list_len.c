#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: the list
 *
 * File: 1-list_len.c
 * Auth: Zuhair Ahmed
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
