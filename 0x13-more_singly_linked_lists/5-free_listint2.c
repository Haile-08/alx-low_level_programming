#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: the pointer to head
 *
 * Description: a funciton that frees a list
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *cur;

	if (head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		cur = ptr;
		ptr = ptr->next;
		free(cur);
	}
	*head = NULL;
}
