#include "lists.h"

/**
 * _strlen - string lenght
 * @c: the string input
 *
 * Description: the length of the string
 *
 * Return: the string length
 */

size_t _strlen(const char *c)
{
	size_t i = 0;

	while (c[i] != '\0')
		++i;
	return (i);
}

/**
 * add_node_end - add a node ot the end
 * @head: pointer of the head
 * @str: string input
 *
 * Description: adds a new node at the end
 *
 * Return: the address of the new element
 *	NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr = *head;
	size_t l;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	l = _strlen(str);
	new_node->str = strdup(str);
	new_node->len = l;
	new_node->next = NULL;
	if (ptr == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
		return (new_node);
	}
}
