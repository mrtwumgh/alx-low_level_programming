#include "lists.h"

/**
 * sum_dlistint - sums all data in a list
 * @head: pointer to head
 *
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
