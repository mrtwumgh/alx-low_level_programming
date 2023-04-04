#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: target string
  * @b: character that fills string
  * @n: n bytes to be filled
  *
  * Return: Pointer to string
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
