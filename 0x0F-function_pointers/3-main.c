#include "3-calc.h"

/**
  * main - entry point into code
  * @argc: argument counter
  * @argv: argument vector
  *
  * Return: Always 0(Success)
  */

int main(int argc, char *argv[])
{
	int result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2] == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	func = get_op_func(argv[2]);

	if ((argv[2][0] == '/' && atoi(argv[3]) == 0) ||
	    (argv[2][0] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = func(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
