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
	const list_t *ptr;

	if (h == NULL)
	{
		printf("string is empty");
		return (0);
	}
	ptr = h;
	while(ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[5] %s\n",ptr->str);
		}
		ptr = ptr->next;
		++count;
	}
	return (count);
}
