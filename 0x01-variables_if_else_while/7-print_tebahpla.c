#include <stdio.h>

/**
*main - entry point to code
*Description - prints out alphabet in reverse
*Return: returns a 0 value
*
*/

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
