#include "main.h"

/**
  * times_table - printss the 9 times table
  *
  * Return: Void
  */

void times_table(void)
{
	int a, b, p;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			p = a * b;
			if (p < 10)
			{
				_putchar(p + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}				
