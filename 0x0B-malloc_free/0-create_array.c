#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: number of chars to create
  * @c: characters to initialize with
  *
  * Return: Pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *)malloc(sizeof(*s) * size);

	if (s == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
