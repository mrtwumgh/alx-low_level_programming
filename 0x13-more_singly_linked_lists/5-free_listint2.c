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
	listint_t *tmp;

	if (head != NULL)
	{
		current = *head;

		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
