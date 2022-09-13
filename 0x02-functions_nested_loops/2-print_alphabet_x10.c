#include "main.h"

/**
* main - entry point into code
* Description - Prints 10 times the alphabet
*Return: Should return a 0 value
*
*/

int main(void)
{
	int i;
	char c;

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
	return (0);
}
