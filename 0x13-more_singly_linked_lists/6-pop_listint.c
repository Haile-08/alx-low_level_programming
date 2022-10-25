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

	if (head == NULL)
		return (0);
	ptr = (*head);
	(*head) = (*head)->next;
	data = ptr->n;
	free(ptr);
	ptr = NULL;
	return (data);
}
