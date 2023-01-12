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
	hash_node_t *current_node;
	int index;

	if (ht == NULL ||  key == NULL || *key == '\0' || value == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);

	strcpy(node->key, strdup(key));
	strcpy(node->value, strdup(value));
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	if (current_node == NULL)
		ht->array[index] = node;
	else
	{
		while (current_node->next != NULL)
		{
			if (current_node->next == NULL)
			{
				current_node->next = node;
				break;
			}
			current_node = current_node->next;
		}
	}
	return (1);
}
