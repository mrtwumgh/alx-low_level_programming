#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for array
  *@nmemb: number of elements in array
  *@size: size of each element
  *Return: Returns pointer to the allocated memory
  *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	char m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = (nmemb * size)
	ptr = malloc(m);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < m; i++)
	{
		*(ptr + i) = 0;
	}

	return (ptr);
}
