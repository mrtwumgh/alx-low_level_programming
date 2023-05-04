#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: the number
  *
  * Return: Void
  */

void print_binary(unsigned long int n)
{
	unsigned long int bit = 1UL << 63;

	if (n == 0)
	{
		_putchar('0');
	}

	while (bit && !(n & bit))
	{
		bit >>= 1;
	}

	while (bit)
	{
		if (n & bit)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		bit >>= 1;
	}
}
