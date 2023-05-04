#include "main.h"

/**
  * get_endianness - checks the endianness
  *
  * Return: 1 if little endian, 0 if big endian
  */

int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	if (ptr[0] == 1)
	{
		return (1);
	}

	return (0);
}
