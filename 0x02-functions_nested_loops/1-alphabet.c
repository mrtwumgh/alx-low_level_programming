#include "main.h"

/**
*main - entry point to code
*Description - Prints the alphabet, in lower case
*Return: returns a value of 0
*
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
