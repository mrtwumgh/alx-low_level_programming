#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet in lowercase 10 times
  *
  * Return: Void
  *
  */

void print_alphabet_x10(void)
{
	int x;
	char ch;

	for (x = 0; x < 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}
