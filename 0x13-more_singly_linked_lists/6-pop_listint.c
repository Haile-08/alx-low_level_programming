#include "lists.h"

/**
 * pop_listint - pop a list
 * @head: double pointer to head
 *
 * Description:deletes the head node of a listint_t linked list.
 *
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data = 0;

	if (head != NULL)
	{
		ptr = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = ptr;
	}
	return (data);
}
