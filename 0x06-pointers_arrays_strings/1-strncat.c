#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: the target string
  * @src: the source string
  * @n: n bytes for the source string
  *
  * Return: The target string(dest)
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int str_len = 0;

	while (dest[i] != '\0')
	{
		i++;
		str_len++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[str_len + j] = src[j];
	}
	dest[str_len + j] = '\0';

	return (dest);
}
