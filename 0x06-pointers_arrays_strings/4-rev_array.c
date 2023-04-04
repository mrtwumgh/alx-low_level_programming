#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: the array to be reversed
  * @n: number of elements in the array
  *
  * Return: Void
  */

void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		if (a[i] != 0)
		{
			if (a[i] >= 1000)
			{
				_putchar((a[i] / 1000) + '0');
				_putchar(((a[i] / 100) % 10) + '0');
				_putchar(((a[i] / 10) % 10) + '0');
			}
			else if (a[i] >= 100)
			{
				_putchar((a[i] / 100) + '0');
				_putchar(((a[i] / 10) % 10) + '0');
			}
			else if (a[i] >= 10)
			{
				_putchar((a[i] / 10) + '0');
			}
			_putchar((a[i] % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(a[i] + '0');
		}
		i--;
	}
	_putchar('\n');
}
