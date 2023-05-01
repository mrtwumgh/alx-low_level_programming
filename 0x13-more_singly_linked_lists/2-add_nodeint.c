#include "lists.h"

/**
  * add_nodeint - adds a node at the beginning of a list
  * @head: head node
  * @n: value of node
  *
  * Return: the new address of head
  */

listint_t *add_nodeint(listint_t  **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
