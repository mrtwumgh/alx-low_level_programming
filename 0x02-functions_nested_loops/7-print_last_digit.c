#include "main.h"

/**
*print_last_digit -  prints the last digit of a number
*@n: last digit to be displayed
*Return: returns value of last digit
*
*/

int print_last_digit(int n)
{
	int last_dig;

	if (n >= 0)
		last_dig = n % 10;
	else
		last_dig = (n % 10) * -1;
	_putchar('0' + last_dig);
	return (last_dig);
}
