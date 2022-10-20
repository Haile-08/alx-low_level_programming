#include "lists.h"

/**
 * _strlen - string length
 * @c: string input
 *
 * Description: return lenght of the string
 *
 * Return: lenght of string
 */

size_t _strlen(const char *c)
{
	size_t i = 0;

	while (c[i] != '\0')
		++i;
	return (i);
}

/**
 * add_node - add a new node
 * @head: the head of the list
 * @str: element of the list
 *
 * Description: add a new node at the beginning
 *
 * Return: the address of the new element or
 *	null.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t l;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	l = _strlen(str);
	new->str = strdup(str);
	new->len = l;
	new->next = *head;
	*head = new;

	return (new);
}
