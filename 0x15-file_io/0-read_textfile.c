#include "main.h"

/**
  * read_textfile - reads a text file
  * @filename: the filename
  * @letters: the number of characters to read
  *
  * Return: actual number of characters it reads
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	char *pbuffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	pbuffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (pbuffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, pbuffer, letters);

	write(STDOUT_FILENO, pbuffer, letters);

	free(pbuffer);
	close(fd);

	return (bytes_read);
}
