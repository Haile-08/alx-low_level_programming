#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: head to the pointer
 *
 * Description: function that frees a listint_t list.
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
