#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head pointer
 * @index: index to delete node at
 *
 * Return: 1 if successful, -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL, *nextnode = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (index >= count)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		temp = *head;
		count = 0;
		while (count < index)
		{
			temp = temp->next;
			count++;
		}
		nextnode = temp->next;
		temp->prev->next = temp->next;
		if (nextnode != NULL)
			nextnode->prev = temp->prev;
		free(temp);
	}
	return (1);
}
