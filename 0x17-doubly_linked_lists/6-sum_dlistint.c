#include "lists.h"

/**
 * sum_dlistint - sum the list value
 * @head: the head of a list
 *
 * Description: sum of all the data (n) of a dlistint_t linked list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
