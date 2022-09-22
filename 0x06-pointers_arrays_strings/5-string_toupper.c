#include "main.h"

/**
  * string_toupper - changes lowercase to uppercase
  *@s: string
  *Return: the resulting string
  */

char *string_toupper(char *s)
{
	int a;

	a = 0;

	while (*(s + a))
	{
		if ((*(s + a) >= 97) && (*(s + a) <= 122))
			*(s + a) = *(s + a) - 32;
		a++;
	}
	return (s);
}
