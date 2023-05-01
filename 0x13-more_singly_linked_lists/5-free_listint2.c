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
		current = *head;

		while (*head != NULL)
		{
			current = current->next;
			free(*head);
			*head = current;
		}
		*head = NULL;
	}
}
