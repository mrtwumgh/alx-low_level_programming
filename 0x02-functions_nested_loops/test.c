#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int result;
	int x = 1;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			result = x * b;
			if (result < 10)
			{
				putchar(result + '0');
			}
			else
			{
				putchar((result / 10) + '0');
				putchar((result % 10) + '0');
			}
		}
		putchar('\n');
	}

	return (0);
}
