#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: format specifiers
  *
  * Return: Void
  */

void print_all(const char * const format, ...)
{
	va_list list;
	char *str;
	int i = 0;

	va_start(list, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	va_end(list);
}
