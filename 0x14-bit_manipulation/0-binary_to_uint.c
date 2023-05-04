#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: the string
  *
  * Return: the length of the string
  */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  * binary_to_uint - converts binary number to an int
  * @b: binary notation
  *
  * Return: the decimal notation
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;
	int len = 0;

	len = _strlen(b);

	if (b == NULL || *b == '\0')
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			result = 2 * result + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
