#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: the string
  *
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
  * create_file - creates a file
  * @filename: filename
  * @text_content: string to be written to file
  *
  * Return: 1 on success else -1
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
