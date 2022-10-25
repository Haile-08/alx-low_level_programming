#include "lists.h"

/**
 * add_nodeint - add a new node
 * @head: the head pointer
 * @n: the int value
 *
 * Description: add a new node at the beginnin of a list
 *
 * Return: address of a new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
