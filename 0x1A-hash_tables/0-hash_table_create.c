#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size is the size of the array
 *
 * Return: pointer to the newly created hash table
 *	If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int i = 0;

	if (size < 1)
		return (NULL);

	hash_t = (hash_table_t *) malloc(sizeof(hash_table_t) * size);
	if (hash_t == NULL)
		return (NULL);

	hash_t->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);

	for (i = 0 ; i < size; i++)
		hash_t->array[i] = NULL;

	hash_t->size = size;
	return (hash_t);
}
