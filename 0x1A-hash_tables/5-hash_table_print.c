#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current = NULL;
	unsigned int flag = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
			{
				printf(",");
			}

			current = ht->array[i];
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
