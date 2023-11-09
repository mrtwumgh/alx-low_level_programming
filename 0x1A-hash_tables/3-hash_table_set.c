#include "hash_tables.h"

/**
 * hash_table_set - adds elements to the hash table
 * @ht: hash table to be updated
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: returns 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newnode = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	newnode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}

	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode);
		return (0);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
