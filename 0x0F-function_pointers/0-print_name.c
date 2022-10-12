#include "function_pointers.h"

/**
  * print_name - prints the name
  *@name: name to be printed
  *@f: pointer to the function
  *Return: Null
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		if (name != NULL)
		{
			(*f)(name);
		}
	}
}
