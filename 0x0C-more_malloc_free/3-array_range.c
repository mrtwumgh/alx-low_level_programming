#include <stdlib.h>
#include "main.h"

/**
  * array_range - creates an array of integers
  *@min: minimum range of values stored
  *@max: maximum range of values stored
  *Return: returns a pointer to the new array
  */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		*(arr + j) = i;
	}

	return (arr);
}
