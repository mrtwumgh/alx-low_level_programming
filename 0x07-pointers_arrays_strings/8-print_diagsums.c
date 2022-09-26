#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - sum of two diagonal square matrix integers
  * @a: array input
  * @size: size of the array
  * Return: Void
  */

void print_diagsums(int *a, int size)
{
	int b;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size * b) + b];
		sum2 += a[(size * (b + 1) - (b + 1))];
	}

	printf("%d, %d\n", sum1, sum2);
}
