#include "main.h"
#include <stdio.h>

/**
  *print_array - prints n elemetns of an array
  *@a: pointer
  *@n: parameter to be processed
  *Return: Void
  */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		while (i < n - 1)
			printf("%d, ", a[i++]);
		printf("%d\n", a[i]);
	}
	else
		printf("\n");
}
