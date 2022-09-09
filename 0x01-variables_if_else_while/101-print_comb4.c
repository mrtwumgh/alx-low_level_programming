#include <stdio.h>

/**
*main - entry point for code
*Description - prints out every combination of 3 digits
*Return: should return a value of 0
*
*/

int main(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (o = m + 1; o <= 9; o++)
			{
				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + o);
				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
