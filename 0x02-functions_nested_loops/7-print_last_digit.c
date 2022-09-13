#include "main.h"

/**
*print_last_digit -  prints the last digit of a number
*@n: last digit to be displayed
*Return: returns value of last digit
*
*/

int print_last_digit(int n)
{
	int m;

	if (n >= 0)
		m = n % 10;
	else
		m = (n % 10) * -1;
	_putchar('0' + m);
	return (m);i
}
