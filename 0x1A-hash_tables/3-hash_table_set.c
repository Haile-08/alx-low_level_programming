#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * create_node - create a node
 * @key: input key
 * @value: input value
 *
 * Description: create a new node
 * Return: pointer to the new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new);
		return (NULL);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}

	return (new);
}

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
	new = create_node(key, value);
	if (new == NULL)
		return (0);

	/* check if hash table at index is empty */
	if (ht->array[i] == NULL)
	{
		ht->array[i] = new;
		return (1);
	}
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = new->value;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp->next = new;
	new->next = NULL;
	return (1);

}
