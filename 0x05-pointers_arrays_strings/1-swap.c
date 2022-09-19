#include "main.h"

/**
  *swap_int - swaps the values of two integers
  *@a: the first variable
  *@b: the second variable
  *Return: Void
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
