#include <stdio.h>

/**
  * main - entry point into code
  *@argc: argument count
  *@argv: vector of strings to arguments to be passed
  *Return: 0
  *
  */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
