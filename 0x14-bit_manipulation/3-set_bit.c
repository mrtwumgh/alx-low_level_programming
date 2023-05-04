#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: pointer to number
  * @index: index
  *
  * Return: 1 if successful else -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	if (n && mask)
	{
		*n |= mask;
		return (1);
	}

	return (-1);
}
