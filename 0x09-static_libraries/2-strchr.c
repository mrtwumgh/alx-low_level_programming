#include "main.h"

/**
  * *_strchr - locates a character in a string
  * @s: string to process
  * @c: character to be found
  * Return: a pointer result or null result
  */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (0);
		s++;
	}
}
