#include "main.h"

int prm_num(int n, int x);

/**
  * is_prime_number - returns 1 if integer is prime
  *@n: the number to be processed
  *Return: return 1 else 0
  *
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prm_num(n, n - 1));
}

/**
  * prm_num - recursively calculates if a number is prime
  *@n: the number to be processed
  *@x: the iterator
  *Return: 1 if number is prime else 0
  *
  */

int prm_num(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > o)
		return (0);
	return (prm_num(n, x - 1));
}
