#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: the number to be computed
  *
  * Return: the last digit of n
  */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		n %= 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n %= 10;
		_putchar((n * -1) + '0');
		return (n * -1);
	}
}
