#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to be checked
  *
  * Return: The length of the string
  */


int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}

/**
  * puts_half - prints half a string
  * @str: string to be checked
  *
  * Return: Void
  */

void puts_half(char *str)
{
	int i = 0;
	int n;
	int len;

	len = _strlen(str);
	n = (len - 1) / 2;

	if (n % 2 == 0)
	{
		n++;
	}

	i = n;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
