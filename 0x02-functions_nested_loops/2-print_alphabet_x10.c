#include "main.h"

/**
* print_alphabet_x10 - entry point into code
* Description - Prints 10 times the alphabet
*Return: Should return a 0 value
*
*/

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
