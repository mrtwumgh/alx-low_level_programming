#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: number to be computed
  *
  * Return: the absolute value
  */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
