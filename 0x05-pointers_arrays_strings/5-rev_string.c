#include "main.h"

/**
  *rev_string - reverses a string
  *@s: string to be reversed
  *Return: Void
  */
void rev_string(char *s)
{
	char tmp;
	int length;
	int b;
	int c;

	length = 0;
	b = 0;

	while (s[length] != '\0')
		length++;
	c = length - 1;
	length /= 2;
	while (length--)
	{
		tmp = s[b];
		s[b] = s[c];
		s[c] = tmp;
		b++;
		c--;
	}
}
