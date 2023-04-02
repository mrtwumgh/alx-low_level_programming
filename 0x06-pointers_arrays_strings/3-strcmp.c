#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: 0 if equal, 1 or -1 if unequal
  */

int _strcmp(char *s1, char *s2)
{
	int str_len1 = 0;
	int str_len2 = 0;
	int status = 0;
	int i;

	while (s1[str_len1] != '\0')
	{
		str_len1++;
	}

	while (s2[str_len2] != '\0')
	{
		str_len2++;
	}

	if (str_len1 != str_len2)
	{
		if (str_len1 > str_len2)
		{
			status = 15;
		}
		else
		{
			status = -15;
		}
	}
	else
	{
		for (i = 0; i < str_len1; i++)
		{
			if (s1[i] != s2[i])
			{
				status = 15;
			}
		}
	}

	return (status);
}
