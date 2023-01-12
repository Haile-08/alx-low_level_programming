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
	hash_node_t *new;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Find the index */
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	/* create node */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);

	/* check if hash table at index is empty */
	if (ht->array[i] == NULL)
	{
		ht->array[i] = new;
		return (1);
	}
	else
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp->next = new;
		new->next = NULL;
	}
	return (1);

}
