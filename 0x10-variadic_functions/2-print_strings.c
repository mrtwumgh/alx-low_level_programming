#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @separator: separates the strings
  * @n: control variable
  *
  * Return: Void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(list);
}
