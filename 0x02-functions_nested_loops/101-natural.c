#include <stdio.h>

/**
*main - entry point into code
*Description - prints out multiples of 3 and 5
*Return: return a value of 0
*
*/

int main(void)
{
	int a;
	int b;

	for (b = 0; b < 1024; b++)
	{
		if ((b % 3 == 0 || (b % 5 == 0))
			a = a + b;
	}
	printf("%d\n", a);
	return (0);
}
