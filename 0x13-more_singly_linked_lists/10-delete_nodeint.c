#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at index
  * @head: head node
  * @index: index
  *
  * Return: 1 if successful -1 if not
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *current;
	unsigned int i = 0;

	prev = *head;
	current = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		for (i = 0; i < index && current != NULL; i++)
		{
			prev = current;
			current = current->next;
		}
		if (current == NULL)
		{
			return (-1);
		}
		prev->next = current->next;
		free(current);
	}

	return (1);
}
