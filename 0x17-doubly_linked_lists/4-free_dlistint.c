#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	dlistint_t *next = NULL;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	head = NULL;
}
