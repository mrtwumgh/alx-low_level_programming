#include "main.h"

/**
* _isdigit - checks if a a charater is a digit
*@c: character to be checked
*Return: should return 1 if its a digit otherwise 0
*
*/

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
