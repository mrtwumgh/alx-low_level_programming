#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to be checked
  *
  * Return: The length of the string
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}

/**
  * rev_string - reverse a string
  * @s: string to be reversed
  *
  * Return: Void
  */

void rev_string(char *s)
{
	int len;
	int index = 0;
	char temp;

	len = _strlen(s) - 1;

	while (index < len)
	{
		temp = *(s + index);
		*(s + index) = *(s + len);
		*(s + len) = temp;
		index++;
		len--;
	}

}
