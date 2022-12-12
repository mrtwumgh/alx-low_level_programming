#include "main.h"

/**
  *_atoi - converts a string to an integer
  *@s: string to processed
  *Return: Returns the converted string
  */

int _atoi(char *s)
{
	int a;
	unsigned int n;

	a = 1;
	n = 0;

	do {
		if (*s == '-')
			a *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;
	} while (*s++);

	return (n * a);
}
