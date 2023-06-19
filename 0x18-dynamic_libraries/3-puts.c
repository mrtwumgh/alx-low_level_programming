#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to be checked
  *
  * Return: The length of the string
  */

void _puts(char *str)
{
	int index = 0;
	int len_s = 0;

	while (str[len_s])
	{
		len_s++;
	}

	while (index < len_s)
	{
		_putchar(*(str + index));
		index++;
	}
	_putchar('\n');
}
