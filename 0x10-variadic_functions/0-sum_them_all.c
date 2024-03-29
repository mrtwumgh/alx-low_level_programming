#include "variadic_functions.h"

/**
  * sum_them_all - sums all its parameters
  * @n: control parameter
  *
  * Return: The sum of all parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int result = 0;
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(list, int);
	}

	va_end(list);

	return (result);
}
