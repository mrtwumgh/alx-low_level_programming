#include <stdio.h>
#include <unistd.h>

/**
 * main -  A C program that writes to a new line and standard error
 * Return: Program should return 1
 *
 */
int main(void)
{
	write(20, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
