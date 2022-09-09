#include <stdio.h>

/**
*main - Entry point to code
*Description - Print characters in base 16
*Return: should return a value of 0
*
*/

int main(void)
{
	char c;

	for (c = 0; c < 16; c++)
	if (c < 10)
	{
		putchar('0' + c);
	}
	else if (c >= 10)
	{
		putchar('a' + c % 10);
	}
	putchar('\n');
	return (0);
}
