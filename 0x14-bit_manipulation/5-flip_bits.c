#include "main.h"

/**
  * flip_bits - returns the number of bits to flip
  * @n: first number
  * @m: second number
  *
  * Return: the number of bits to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff;

	diff = n ^ m;

	while (diff != 0)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}
