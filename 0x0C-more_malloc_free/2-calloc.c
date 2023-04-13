#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: memory to be allocated
  * @size: size of each element
  *
  * Return: Pointer to the memory location
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}

	return (p);
}
