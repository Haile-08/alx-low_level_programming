#include "lists.h"

/**
 * print_listint - print the list
 * @h: header pointer
 *
 * Discription: function print all elements of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		++i;
		h = h->next;
	}

	return (i);
}
