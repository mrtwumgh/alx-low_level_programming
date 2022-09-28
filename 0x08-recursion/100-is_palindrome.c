#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int pal_cmp(char *s, int i, int j);

/**
  * is_palindrome - returns 1 if string is a palindrome
  *@s: string to be checked
  *Return: 1 if palindrome else 0
  *
  */

int is_palindrome(char *s)
{
	if (pal_cmp(s, 0, (_strlen_recursion(s) - 1)))
		return (1);
	else
		return (0);
}

/**
  * _strlen_recursion - calcualtes string with recursion
  *@s: pointer to be processed
  *Return: amount of bytes in string
  *
  */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return ((_strlen_recursion(s + 1)) + 1);
}

/**
  * pal_cmp - adds additional variables to increment from either
  * end of string
  *@s: string to be checked
  *@i: index forward from beginning of string
  *@j: index backward from end of string
  *Return: 1 if string is a palindrome else 0
  *
  */

int pal_cmp(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	else if (i >= j)
		return (1);
	else
		return (pal_cmp(s, i + 1, j - 1));
}
