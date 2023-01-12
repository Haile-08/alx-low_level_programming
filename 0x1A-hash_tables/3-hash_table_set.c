#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - add an element
 * @ht: the table
 * @key: the key
 * @value: the value to the key
 *
 * Description: add an element to a table
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL ||  key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* find the index of using the hash table */
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	/* Create a new node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	/* Insert in open or handle collision */
	if (tmp == NULL)
		tmp = node;
	else
	{
		while (tmp)
			tmp = tmp->next;
		node->next = tmp;
	}
	return (1);
}
