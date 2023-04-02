#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: the target string
  * @src: the source string
  *
  * Return: The target string (concatenated)
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int str_len = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
		str_len++;
	}

	for (i = str_len; src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
