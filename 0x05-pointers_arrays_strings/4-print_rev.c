#include "main.h"

/**
  *print_rev -  prints a string in reverse
  *@s: string to be processed
  *Return: Void
  */

void print_rev(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
		length++;
	while (length > 0)
		_putchar(s[--length]);
	_putchar('\n');
}
