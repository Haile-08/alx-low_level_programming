#include "lists.h"

/**
 * sum_listint - sum of the data
 * @head: the pointer to the head
 *
 * Description: sum all the data(n) of a list
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
