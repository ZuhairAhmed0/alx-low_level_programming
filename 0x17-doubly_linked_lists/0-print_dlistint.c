#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h -> thi list to be print
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *last = h;
	size_t count = 0;

	if (last != NULL)
	{
		printf("%d\n", last->n);
		last = last->next;
		count++;
	}
	return (count);
}
