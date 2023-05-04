#include "main.h"

/**
  * get_bit - returns the value of a bit
  * @n: number
  * @index: index
  *
  * Return: the value at index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;
	int result = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (n && mask)
	{
		result = (n & mask) ? 1 : 0;
	}
	else
	{
		return (-1);
	}

	return (result);
}
