#include "lists.h"

/**
 * free_list - free the list
 * @head: pointer to the head
 *
 * Description: frees a list
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *ptr;
	list_t *nxt;

	ptr = head;

	while (ptr != NULL)
	{
		nxt = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = nxt;
	}
}
