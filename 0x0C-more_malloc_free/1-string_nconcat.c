#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concatenates two strings
  *@s1: 1st string
  *@s2: 2nd string
  *@n: number of bytes
  *Return: the pointer to allocated memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	unsigned int x, n1 = 0, n2 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 != NULL)
	{
		while (s1[n1] != 0)
			n1++;
	}
	else
		s1 = "";
	if (s2 != NULL)
	{
		while (s2[n2] != 0)
			n2++;
	}
	else
		s2 = "";

	if (n < n2)
		x = n;
	else
		x = n2;
	b = malloc(sizeof(char) * (n1 + x + 1));

	if (b == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
	{
		b[i] = s1[i];
	}
	for (j = 0; j < x; j++)
	{
		b[i + j] = s2[j];
	}
	b[i + j] = 0;

	return (b);
}
