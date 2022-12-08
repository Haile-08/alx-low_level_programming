#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the head of the list
 *
 * Description: frees a dlistint_t list
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
