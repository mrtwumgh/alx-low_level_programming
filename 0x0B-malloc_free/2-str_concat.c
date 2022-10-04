#include "main.h"

/**
  * str_concat - concatenates two strings
  *@s1: 1st string to be concatenated
  *@s2: second string to be concatenated
  *Return: pointer to the new string
  *
  */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (i < l1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (l1 + l2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
