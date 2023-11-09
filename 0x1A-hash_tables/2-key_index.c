#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key value
 * @size: size of the array or hash table
 *
 * Return: the index of the key/value pair stored in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
