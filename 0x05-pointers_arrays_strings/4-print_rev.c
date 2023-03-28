#include "main.h"

/**
  * _strlen - returns the length of string
  * @s: string to be checked
  *
  * Return: The length of a string
  */

int _strlen(char *s)
{
	int len;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}

/**
  * print_rev - prints a string, in reverse
  * @s: string to be reversed
  *
  * Return: Void
  */

void print_rev(char *s)
{
	int len = 0;

	len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
