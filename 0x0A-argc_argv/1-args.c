#include <stdio.h>

/**
  * main - entry point into code
  *@argc: counter for argv
  *@argv: vector of strings of arguments to be passed
  *Return: 0
  *
  */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
