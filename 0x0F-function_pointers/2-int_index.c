#include "function_pointers.h"

/**
  * int_index - searches an array for an integer
  * @array: array to be processed
  * @size: size of array
  * @cmp: function pointer
  *
  * Return: returns the index of element, -1 if no element or size <= 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
