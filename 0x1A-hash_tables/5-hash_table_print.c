#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - table print
 * @ht: input table
 *
 * Description: print the table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'", comma, tmp->key, tmp->value);
			comma = ", ";
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
