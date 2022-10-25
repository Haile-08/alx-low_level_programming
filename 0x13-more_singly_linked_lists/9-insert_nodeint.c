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
	listint_t *pre_ptr;
	listint_t *post_ptr;
	listint_t *new;
	unsigned int i = 0;

	pre_ptr = (*head);
	while ((i < idx) && (pre_ptr->next != NULL))
	{
		pre_ptr = pre_ptr->next;
		++i;
	}
	if (i < idx)
		return (NULL);
	post_ptr = (*head);
	i = 0;
	while ((i < (idx - 1)) && (post_ptr->next != NULL))
	{
		post_ptr = post_ptr->next;
		++i;
	}
	if (i < (idx - 1))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = pre_ptr;
	post_ptr->next = new;

	return (new);
}
