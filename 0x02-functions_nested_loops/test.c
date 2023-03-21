#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int result;
	int x = 1;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = a * b;
			if (result < 10)
			{
				putchar(result + '0');
				if (b != 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
			}
			else
			{
				putchar((result / 10) + '0');
				putchar((result % 10) + '0');
				if (b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}

	return (0);
}
