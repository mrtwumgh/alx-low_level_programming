#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0
  * @n: the number
  * @index: index
  *
  * Return: 1 if successful else -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (n && mask)
	{
		*n &= ~mask;
		return (1);
	}

	return (-1);
}
