#include "lists.h"

/**
 * listint_len - list length
 * @h: head pointer
 *
 * Description: find the number elements of a list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		++i;
		h = h->next;
	}
	return (i);
}
