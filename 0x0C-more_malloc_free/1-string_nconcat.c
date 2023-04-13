#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to be manipulated
  *
  * Return: the length of the string
  */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
  * string_nconcat - concatenates two strings
  * @s1: destination string
  * @s2: source string
  * @n: number of bytes to combine
  *
  * Return: A pointer to the combined string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int len1 = 0;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}

	len1 = _strlen(s1);

	st = (char *)malloc(sizeof(*st) * (len1 + n + 1));

	if (st == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		st[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		st[len1 + i] = s2[i];
	}
	st[len1 + i] = '\0';

	return (st);
}
