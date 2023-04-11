#include "main.h"

/**
  * _strlen - gets the length of a string
  * @st: string to processed
  *
  * Return: the length of the string
  */

int _strlen(char *st)
{
	int len = 0;

	while (st[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: a pointer to the combined strings
  */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *s;
	int i;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	s = (char *)malloc(sizeof(*s) * (len1 + len2 + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[len1 + i] = '\0';

	return (s);
}
