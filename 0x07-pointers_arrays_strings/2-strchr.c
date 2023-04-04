#include "main.h"
#include <stddef.h>

/**
  * _strchr - locates a character in a string
  * @s: string to be processed
  * @c: the character to be located
  *
  * Return: the pointer to the character located
  */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *p = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (p);
}
