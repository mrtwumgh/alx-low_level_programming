#include "main.h"

/**
  * _strpbrk - searches string for any set of data set
  * @s: string to searched
  * @accept: string to searched
  * Return: Pointer to the byte in s that matches or Null
  */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; *(accept + a) != 0; a++)
		{
			if (*s == *(accept + a))
				return (s);
		}
		s++;
	}

	return (0);
}
