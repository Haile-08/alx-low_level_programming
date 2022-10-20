#include "lists.h"

/**
 * print_list - print a list of elements
 * @h: head pointer
 *
 * Description: print all the elements of a list_t list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len,  h->str);
		}
		h = h->next;
		++count;
	}
	return (count);
}
