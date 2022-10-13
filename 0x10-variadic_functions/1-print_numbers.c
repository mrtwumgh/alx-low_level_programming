#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line
  *@separator: is the string to be printed between numbers
  *@n: number of integers passed to the function
  *Return: Void
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(list, int));
		}
		else if (separator == 0 && i == 0)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
			printf("%s%d", separator, var_arg(list, int));
		}
	}

	va_end(list);

	printf("\n");
}
