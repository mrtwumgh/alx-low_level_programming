#include "variadic_functions.h"

/**
  * sum_them_all - function sums all parameters
  *@n: number of arguments to be processed
  *Return: the sum
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
