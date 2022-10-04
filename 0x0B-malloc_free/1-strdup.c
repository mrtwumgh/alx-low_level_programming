#include "main.h"

/**
  * _strdup - returns a pointer to a newly allocated space
  * that contains a copy of the string given as a parameter
  *@str: string to be processed
  *Return: pointer to the string
  *
  */

char *_strdup(char *str)
{
	char *d;
	unsigned int i;
	unsigned int l;

	i = 0;
	l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	d = malloc(sizeof(char) * (l + 1));

	if (d == NULL)
		return (NULL);

	while ((d[i] = str[i]) != '\0')
		i++;

	return (d);
}
