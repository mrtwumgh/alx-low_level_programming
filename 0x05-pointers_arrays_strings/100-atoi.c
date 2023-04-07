#include "main.h"

/**
  * _atoi - converts a string to an integer
  * @s: string to be converted
  *
  * Return: The converted string
  */

int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int sign = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		result = result * 10 + s[i] - '0';
		i++;
	}

	return (result * sign);
}
