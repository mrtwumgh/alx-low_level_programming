#include "main.h"
#include <stddef.h>

/**
  * _strpbrk - searches a s string for any set of bytes
  * @s: the string to be searched
  * @accept: the subset string
  *
  * Return: pointer to the found subset
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
