#include "lists.h"

/**
  * free_listint_safe - frees a list
  * @h: head node
  *
  * Return: number of nodes freed
  */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;
	listint_t *current;

	if (h != NULL && *h != NULL)
	{
		return (0);
	}
	current = *h;

	while (current != NULL)
	{
		len++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (len);
}
