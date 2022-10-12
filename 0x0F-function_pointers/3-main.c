#include "3-calc.h"
/**
 * main - main function
 *
 * @argc: counter for arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	int (*func_p)(int, int);

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
	func_p = get_op_func(argv[2]);

	if (func_p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func_p(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
