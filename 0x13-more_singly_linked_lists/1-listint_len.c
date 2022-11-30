#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - unction that returns the number of elements in a linked list
 * @h: the list
 *
 * File: 0-print_listint.c
 * Auth: Zuhair Ahmed
 *
 * Return: 0-print_listint.c
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
