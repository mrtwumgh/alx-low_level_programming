#include "function_pointers.h"

/**
  * array_iterator - executes a function on each element of a array
  * @array: array to be processed
  * @size: size of the array
  * @action: function to work on each array element
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
