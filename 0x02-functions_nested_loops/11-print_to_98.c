#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: number to start printing from
  *
  * Return: Void
  */

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);
		}
	printf("98");
	}
	else if (n > 98)
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);
		}
	printf("98");
	}
	else
	{
		printf("%d", n);
	}
	putchar('\n');
}
