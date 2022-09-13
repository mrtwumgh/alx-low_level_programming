#include "main.h"

/**
*_islower - checks if character is lowercase
*@c: character to be be checked
*Return: should return a value of 1 if true else 0
*
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
