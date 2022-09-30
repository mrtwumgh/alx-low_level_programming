#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point into code
  *@argc: counter for arguments
  *@argv: vector for strings to arguments to be passed
  *Return: 0
  *
  */

int main(int argc, char *argv[])
{
	int a, b;
	(void)argc;
	(void)argv;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
