
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element
 *	or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int bin = 0;
	hash_node_t pair;

	bin = key_index(ht, key);
	pair = ht->array[bin];

	while (pair != NULL && pair->key != NULL && strcmp(key, pair->key) > 0)
		pair = pair->next;

	if (pair == NULL || pair->key == NULL || strcmp(key, pair->key) != 0)
		return (NULL);
	else
		return (pair->value);
}
