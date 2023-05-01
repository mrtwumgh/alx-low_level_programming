#include "lists.h"

/**
  * pop_listint - deletes the head node
  * @head: head node
  *
  * Return: the head's node data
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
	}

	return (n);
}
