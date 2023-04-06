#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - prints the sum of two diagonals square matrix
  * @a: multidimensional array
  * @size: the size of array
  *
  * Return: Void
  */


void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1) - (i + 1))];
	}

	printf("%d, %d\n", sum1, sum2);

}
