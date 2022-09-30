#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
  * is_num - checks if string is numeric
  *@s: string to be processed
  *Return: True if numeric else false
  *
  */

bool is_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (false);
		}
	}
	return (true);
}

/**
  * main - entry point into code
  *@argc: counter for arguments
  *@argv: argument array
  *Return: 0
  *
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	(void)argc;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		if (!is_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
