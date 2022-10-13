#include "variadic_functions.h"

/**
  * print_strings - prints strings, followed by a new line
  *@separator: is the string to printed between numbers
  *@n: is the count to be passed to the functions
  *Return: Void
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	separator = (separator != NULL) ? separator : "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		c = va_arg(list, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
	}
	putchar('\n');
}
