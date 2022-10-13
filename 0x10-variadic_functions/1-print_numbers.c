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

	separator = (separator != NULL) ? separator : "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(list, int));
	}
	putchar('\n');
}
