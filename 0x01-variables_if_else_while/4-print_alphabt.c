#include <stdio.h>

/**
*main - entry point for code
*Description - prints out alphabets except p and q
*Return: should return a value of 0
*
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'p' && a != 'q')
		putchar(a);
	}
	putchar('\n');
	return (0);
}
