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
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = calloc(nmemb, size);

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}
