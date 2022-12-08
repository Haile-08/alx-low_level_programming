#include "lists.h"

/**
 * print_dlistint - print double list
 * @h: head of the list
 *
 * Descritpion: prints all the elements of a dlistint_t list
 * Return: the number oft nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
