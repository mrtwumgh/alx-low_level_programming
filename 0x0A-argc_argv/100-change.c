#include "main.h"

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0(Success), 1 if error
  */

int main(int argc, char *argv[])
{
	int cents = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		coins++;
	}

	printf("%d\n", coins);

	return (0);
}
