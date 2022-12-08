#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of the list
 * @index: index of the node
 *
 * Description: nth node of a dlistint_t linked list
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head->next != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (index > i)
		return (NULL);
	return (head);
}
