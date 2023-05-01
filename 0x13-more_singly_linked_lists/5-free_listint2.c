#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  * @head: head node
  *
  * Return: Void
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
		}

		*head = NULL;
	}
}
