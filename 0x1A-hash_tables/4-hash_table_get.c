#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - get function
 * @ht: input hash table
 * @key: key input
 *
 * Description: find the value for a key
 * Return: value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return(tmp->value);
		tmp = tmp->next;
	}
	return(NULL);
}
