#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: the string
  *
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);
}

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: filename
  * @text_content: text content
  *
  * Return: 1 on success else -1
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
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
