#include "main.h"

/**
  * binary_to_uint - converts binary number to an int
  * @b: binary notation
  *
  * Return: the decimal notation
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL || *b == '\0')
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		result = 2 * result + (b[i] - '0');
	}

	return (result);
}
