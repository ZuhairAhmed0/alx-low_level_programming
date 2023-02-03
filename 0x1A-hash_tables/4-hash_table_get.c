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
	unsigned long int idx;
	hash_node_t pair;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL)

	idx = key_index((const unsigned char) key, ht->size);

	if (idx >= ht->size)
		return (NULL);

	pair = ht->array[idx];
	while (pair && strcmp(key, pair->key) != 0)
		pair = pair->next;

	return ((pair == NULL) ? NULL : pair->value);
}
