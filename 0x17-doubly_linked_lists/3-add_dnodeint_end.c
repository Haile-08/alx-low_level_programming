#include "lists.h"

/**
 * add_dnodeint_end - add a node ata end
 * @head: the head of the list
 * @n: the value or data of the list
 *
 * Description: adds a new node at the end of a dlistint_t list
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;
	return (new);
}
