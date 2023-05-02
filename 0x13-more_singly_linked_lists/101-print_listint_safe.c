#include "lists.h"

/**
  * print_listint_safe - preints a listint_t linked list
  * @head: head node
  *
  * Return: the number of nodes
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *fast, *slow;

	if (head == NULL)
	{
		exit(98);
	}
	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				fast = fast->next;
				i++;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			i++;
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			return (i);
		}
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}

	return (i);
}
