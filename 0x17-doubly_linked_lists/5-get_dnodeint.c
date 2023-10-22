#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of doubly linked list
 * @head: pointer to head
 * @index: index of node
 *
 * Return: pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (index > i)
	{
		return (NULL);
	}
	else
	{
		temp = head;
		i = 0;
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
	}

	return (temp);
}
