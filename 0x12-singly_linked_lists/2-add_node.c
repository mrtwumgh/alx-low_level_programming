#include "lists.h"
/**
 * add_node - that adds a new node
 * @head: head node
 * @str:  string
 *
 * Return: the head of the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
