#include "main.h"

/**
  *_strncat - concatenates two strings
  *@dest: destination for  string
  *@src: source of string
  *@n: number of bytes
  *Return: a pointer to the resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a])
		a++;
	while (b < n && src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = 0;
	return (dest);
}
