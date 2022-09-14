#include "main.h"
/**
*print_times_table - prints the the 100 times table
*@n: number to be processed
*/
void print_times_table(int n)
{
	int m, o, p;
	int c = 1;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (o = 0; o <= n; o++)
			{
				p = o * m;
				if (c == 0 && p < 10)
				{
					printf(", %d", p);
				} else if (c == 0 && p < 100)
				{
					printf(", %d", p);
				} else if (c == 10 && p < 1000)
				{
					printf(", %d", p);
				} else if (c == 0 && p >= 1000)
				{
					printf(", %d", p);
				}
				else
				{
					printf("%d", p);
				}
				c = 0;
			}
			putchar(10);
			c = 1;
		}
	}
	else
	{
	}
}
