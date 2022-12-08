#include "lists.h"

/**
 * dlistint_len - list length
 * @h: head of the list
 *
 * Description: number of elements in a list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
