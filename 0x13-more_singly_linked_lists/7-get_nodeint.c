#include "lists.h"

/**
 * get_nodeint_at_index - get the node index
 * @head: the head pointer
 * @index: the node index
 *
 * Description: return the nth node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		++i;
	}
	return (head);
}
