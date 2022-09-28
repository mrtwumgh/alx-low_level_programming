#include "main.h"

int sq_rt(int n, int x);

/**
  * _sqrt_recursion - returns the natural square root of a number
  *@n: the number to be processed
  *Return: Result
  *
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sq_rt(n, 0));
}

/**
  * sq_rt - recurses the natural square root of a given number
  *@n: number to be processed
  *@x: the iterator
  *Return: The result
  *
  */

int sq_rt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sq_rt(n, x + 1));
}
