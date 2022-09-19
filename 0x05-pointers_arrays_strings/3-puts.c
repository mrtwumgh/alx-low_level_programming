#include "main.h"

/**
  *_puts - prints a string to stdout
  *@str: string to be processed
  *Return: Void
  */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
