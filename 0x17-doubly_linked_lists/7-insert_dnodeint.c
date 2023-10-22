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
	unsigned int count = 0, i = 0;

	temp = *h;
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx > count)
		return (NULL);
	if (idx == 1)
		add_dnodeint(h, n);
	else if (idx == count)
		add_dnodeint_end(h, n);
	else
	{
		temp = *h;
		newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		newnode->prev = temp->prev;
		newnode->next = temp;
		temp->prev->next =  newnode;
		temp->prev = newnode;
	}
	return (newnode);
}
