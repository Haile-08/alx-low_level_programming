#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node
 * @head: the head pointer
 * @idx: index of the node to be added
 * @n: the input for the new node
 *
 * Description: inserts a new node at a given position
 *
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	ptr = (*head);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	while (idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
