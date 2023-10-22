#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: double pointer to head
 * @idx: index to insert at
 * @n: value to insert
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL, *temp = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp != NULL && count < idx)
	{
		temp = temp->next;
		count++;
	}
	if (count < idx)
		return (NULL);
	if (temp == NULL)
		return (add_dnodeint_end(h, n));
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = temp->prev;
	newnode->next = temp;
	temp->prev->next = newnode;
	temp->prev = newnode;

	return (newnode);
}
