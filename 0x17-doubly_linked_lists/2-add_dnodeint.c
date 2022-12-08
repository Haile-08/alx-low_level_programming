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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (new);
}
