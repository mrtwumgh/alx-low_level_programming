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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
