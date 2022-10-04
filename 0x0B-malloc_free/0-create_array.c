#include "main.h"

/**
  * create_array - creates array of chars and initializes
  * with a specific char
  *@size: size of array
  *@c: element of the array
  *Return: Returns the value
  *
  */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	a = (char *) malloc(size(char) * size);

	if (a == NULL)
		return (0);

	while (i < size)
	{
		*(a + i) = c;
		i++;
	}

	*(a + i) = '\0';

	return (a);
}
