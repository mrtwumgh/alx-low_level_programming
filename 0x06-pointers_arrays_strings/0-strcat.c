#include "main.h"

/**
  *_strcat - concatenates two strings
  *@dest: string to concatenate
  *@src: source string
  *Return: a pointer to the resulting string
  */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
