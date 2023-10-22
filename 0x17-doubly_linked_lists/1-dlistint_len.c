#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: reference pointer to head
 *
 * Return: the number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
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
		temp = temp->next;
		count++;
	}

	return (count);
}
