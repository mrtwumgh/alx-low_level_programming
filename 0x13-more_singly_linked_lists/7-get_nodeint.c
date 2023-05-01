#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node
  * @head: head node
  * @index: index of the node
  *
  * Return: the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	return (current);
}
