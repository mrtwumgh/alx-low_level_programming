#include "main.h"

/**
  * rot13 - encodes a string using rot13
  *@s: string
  *Return: Return string
  */

char *rot13(char *s)
{
	int x;

	x = 0;

	while (s[x])
	{
		while ((s[x] >= 'a' && s[x] <= 'z') || (s[x] >= 'A' && s[x] <= 'Z'))
		{
			if ((s[x] > 'm' && s[x] <= 'z') || (s[x] > 'M' && s[x] <= 'Z'))
			{
				s[x] -= 13;
				break;
			}
			s[x] += 13;
			break;
		}
		x++;
	}
	return (s);
}
