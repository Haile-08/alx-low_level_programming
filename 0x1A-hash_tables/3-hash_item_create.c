#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_node_create - create  a node
 * @key: the key
 * @value: the value
 *
 * Description: create a new node
 * Return: pointer to the new node
 */

hash_node_t *hash_node_create(char *key, char *value)
{
	hash_node_t *node;
       
	node = malloc(sizeof(hash_node_t));
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}
