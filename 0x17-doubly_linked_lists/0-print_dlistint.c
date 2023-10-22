#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: reference pointer to head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
