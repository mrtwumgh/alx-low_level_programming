#include <stdio.h>

/**
* main - Entry point for program
* description - prints alphabets in lowercase
* Return: Returns a value of 0
*
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	putchar(c);
	putchar('\n');
	return (0);
}
