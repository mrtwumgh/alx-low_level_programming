#include "main.h"

/**
  * main - entry point, multiplies two numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0(Success), else 1 on error
  */

int main(int argc, char *argv[])
{
	unsigned int result = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", result);

	return (0);
}
