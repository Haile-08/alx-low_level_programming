#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Description: create a hash table with a fixed size
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
