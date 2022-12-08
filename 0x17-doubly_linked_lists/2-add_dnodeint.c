#include "lists.h"

/**
 * add_dnodeint - add a new node
 * @head: the head of the list
 * @n: the value or data of the list
 *
 * Description: adds a new node at the beginning of a dlistint_t list
 *
 * Return: the address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (h == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		h = new;
		return (new);
	}
	h->next = new;
	new->prev = h;
	new->next = NULL;
	h = new;
	return (new);
}
