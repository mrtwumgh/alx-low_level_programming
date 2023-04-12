#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to be manipulated
  *
  * Return: the length of string
  */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
  * _strcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: the pointer to the concatenated string
  */

char *_strcat(char *s1, char *s2)
{
	int i;
	int s_len;

	s_len = _strlen(s1);

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[s_len + i] = s2[i];
	}
	s1[s_len + i] = '\0';

	return (s1);
}


/**
  * argstostr - concatenates all the arguments of your program
  * @ac: argument count
  * @av: argument vector
  *
  * Return: Pointer to the concatenated string
  */

char *argstostr(int ac, char **av)
{
	char *st;
	int i;
	int total_len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += _strlen(av[i]);
	}

	st = (char *)malloc(sizeof(*st) * (total_len + 1));

	if (st == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		_strcat(st, av[i]);
		_strcat(st, "\n");
	}

	return (st);
}
