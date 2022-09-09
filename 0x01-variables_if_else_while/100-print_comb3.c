#include <stdio.h>

/**
*main - entry point for code
*Description - prints every possible combination of 2 digits
*Return: should return a 0 value
*
*/

int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		for (m = (n + 1); m <= 9; m++)
		{
			putchar('0' + n);
			putchar('0' + m);
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
