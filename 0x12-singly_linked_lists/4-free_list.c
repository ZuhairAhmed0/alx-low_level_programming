#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: the list to be free
 *
 * File: 4-free_list.c
 * Auth: Zuhair Ahmed
 */
void free_list(list_t *head)
{
	free(head);
}
