#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
  * malloc_checked - allocates memory using malloc
  *@b: number of bytes
  *Return: pointer to the memory
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
