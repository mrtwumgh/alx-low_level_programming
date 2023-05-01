#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end
  * @head: head node
  * @n: value of n
  *
  * Return: the new address
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *current;

	current = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	newnode->n = n;
	newnode->next = NULL;

	return (*head);
}
