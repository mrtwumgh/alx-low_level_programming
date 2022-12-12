#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: substring provided
  * @accept: string to cross check
  * Return: number of bytes
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int m;
	int flag;

	m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (m);
		}
	}

	return (0);
}
