#include "main.h"

/**
*times_table - prints out the 9 times table
*Return: returns a void value
*
*/
void times_table(void)
{
	int i;
	int m;
	int n;

	for (i = 0; i < 10, i++)
	{
		for (m = 0; m < 10; m++)
		{
			n = m * 1;

			if (m == 0)
				_putchar(n + '0');
			else if (n >= 10)
			{
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			if (m != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
