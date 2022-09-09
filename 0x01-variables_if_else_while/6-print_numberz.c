#include <stdio.h>

/**
*main - Entry point for code
*Description - print out single digits in base 10
*Return: should return a 0 value
*
*/

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
