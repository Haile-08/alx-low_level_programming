#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: the head of the list
 * @idx: the index of the node
 * @n: the value of the node
 *
 * Description: inserts a new node at a given position
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *head;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new  == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	new->prev = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	i = 1;
	head = *h;
	while (head != NULL && i <= idx)
	{
		head = head->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	temp = head->prev;
	temp->next = new;
	new->prev = new;
	new->next = head;
	head->prev = new;
	return (new);
}
