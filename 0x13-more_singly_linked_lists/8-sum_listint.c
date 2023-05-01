#include "lists.h"

/**
  * sum_listint - returns the sum of all data
  * @head: head node
  *
  * Return: the sum
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		current = head;

		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}

	return (sum);
}
