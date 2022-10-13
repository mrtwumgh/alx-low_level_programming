#include "variadic_functions.h"

/**
  * print_all - prints everything
  *@format: the list of types of arguments to be passed
  *Return: Void
  *
  */

void print_all(const char * const format, ...)
{
	int n = 0;
	char *c;
	char *sep = ", ";
	va_list list;

	va_start(list, format);

	while ((format != NULL) && *(format + n) != '\0')
	{
		switch (*(format + n))
		{
			case 's':
				c = va_arg(list, char *);
				c = (c != NULL) ? c : "(nil)";
				printf("%s", c);
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			default:
				n++;
				continue;
		}

		if (*(format + n + 1) != 0)
		{
			printf("%s", sep);
		}
		n++;
	}
	putchar('\n');
	va_end(list);
}
