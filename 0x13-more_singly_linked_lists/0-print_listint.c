#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - function that prints all the elements of list
 * @h: the list
 *
 * File: 0-print_listint.c
 * Auth: Zuhair Ahmed
 *
 * Return: 0-print_listint.c
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
