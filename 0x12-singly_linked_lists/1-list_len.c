#include "lists.h"

/**
 * list_len - list length
 * @h: pointer of the head
 *
 * Description: returns the number of elements in a linked list_t list
 *
 * Return: lenght of list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		++count;
	}
	return (count);
}
