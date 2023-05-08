#include "main.h"

/**
  * print_error - prints error messages
  * @file_from: return value of first file
  * @file_to: return value of second file
  * @argv: filename
  *
  * Return: void
  */

void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
  * main - entry point into code
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0 alwas success
  */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_error(file_from, file_to, argv);
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(file_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			print_error(-1, 0, argv);
		}
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error(0, -1, argv);
		}
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
