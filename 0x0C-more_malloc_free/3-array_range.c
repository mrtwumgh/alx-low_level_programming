#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: minimum integer
  * @max: maximum integer
  *
  * Return: a pointer to an integer array
  */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = (int *)malloc(sizeof(*p) * max);

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < max)
	{
		p[i] = min;
		min++;
		i++;
	}

	return (p);
}
