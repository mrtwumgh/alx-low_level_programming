#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: the array to be reversed
  * @n: number of elements in the array
  *
  * Return: Void
  */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
