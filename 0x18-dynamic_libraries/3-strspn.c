#include "main.h"
#include <stddef.h>

/**
  * _strspn - gets the length of a prefix substring
  * @s: string to be scanned
  * @accept: set of characters to search for
  *
  * Return: the length of prefix substring
  */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}


	return (count);
}
