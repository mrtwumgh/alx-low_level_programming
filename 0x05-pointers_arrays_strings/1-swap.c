#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: value to be swapped
  * @b: value to be swapped
  *
  * Return: Void
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
