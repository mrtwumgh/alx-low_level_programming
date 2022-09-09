#include <stdio.h>

/**
*main - entry point into code
*Description - prints out every possible combination of
*two digit numbers
*Return: returns a 0 value
*
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
