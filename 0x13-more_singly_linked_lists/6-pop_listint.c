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
	int i;

	if (head == NULL)
		return (0);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (1);
	ptr = (*head);
	(*head) = (*head)->next;
	i = ptr->n;
	ptr = NULL;
	return (i);
}
