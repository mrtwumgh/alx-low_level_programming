#include "main.h"

/**
*print_alphabet - entry point to code
*Description - Prints the alphabet, in lower case
*Return: returns a value of 0
*
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}
