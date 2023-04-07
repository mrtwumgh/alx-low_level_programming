#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to be checked
  *
  * Return: The length of the string
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
  * _puts - prints string to stdout
  * @str: string to be printed
  *
  * Return: Void
  */

void _puts(char *str)
{
	int index = 0;
	int len_s;

	len_s = _strlen(str);


	while (index < len_s)
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
