#include "lists.h"

/**
  * list_len - lists the elements of a linked list
  * @h: head node
  *
  * Return: the number of elements
  */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
