#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: separates numbers
  * @n: control variable
  *
  * Return: Void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	unsigned int num;

	if (n == 0)
	{
		return;
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(list);

}
