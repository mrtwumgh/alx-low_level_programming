#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates memory block using malloc and free
  *@ptr: pointer to the memory
  *@old_size: size of the old memory block
  *@new_size: size of the new memory block
  *Return: pointer to the new memory block
  *
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *op;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	op = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = op[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = op[i];
	}

	free(ptr);
	return (p);
}
