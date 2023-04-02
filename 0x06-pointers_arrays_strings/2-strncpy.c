#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: the target string
  * @src: the source string
  * @n: the number of characters to copy
  *
  * Return: The target string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
