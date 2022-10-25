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
	int data;
	listint_t *ptr, *nxt;

	if (*head == NULL)
		return (0);

	ptr = *head;
	nxt = ptr->next;
	data = ptr->n;
	free(ptr);
	*head = nxt;

	return (data);
}
