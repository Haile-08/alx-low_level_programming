#include "lists.h"

/**
 * add_nodeint_end - add new node
 * @head: head to pointer
 * @n: int value
 *
 * Description: add a new node to the end of a list
 *
 * Return: address of the new element
 *	if it fails return NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		return (new);
	}
}
