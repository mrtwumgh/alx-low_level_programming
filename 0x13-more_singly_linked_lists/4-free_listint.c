#include "lists.h"

/**
  * free_listint - frees a list
  * @head: head node;
  *
  * Return: Void;
  */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (head != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}

}
