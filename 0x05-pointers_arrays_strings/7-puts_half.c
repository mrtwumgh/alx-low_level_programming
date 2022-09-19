#include "main.h"

/**
  *puts_half - prints half a string
  *@str: string to be processed
  *Return: Void
  */

void puts_half(char *str)
{
	int length;
	int half_len;

	length = 0;

	while (str[length] != '\0')
		length++;
	half_len = (length % 2 == 0) ? length / 2 : (length + 1) / 2;
	while (str[half_len] != '\0')
		_putchar(str[half_len++]);
	_putchar('\n');
}
