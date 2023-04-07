#include "main.h"

/**
  * main - entry point, adds positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0(Success), 1 if there is an error
  */

int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}

	return (0);
}
