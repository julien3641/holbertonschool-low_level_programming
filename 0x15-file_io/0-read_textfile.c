#include "main.h"

/**
 * read_textfile - reads an prints text into POSIX standard output
 * @filename: filename
 * @letters: letters
 * Return: return 0 if fail and the number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz, szw;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd < 0)
	{
		return (0);
	}
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	sz = read(fd, buf, letters);
	close(fd);
	if (sz < 1)
	{
		free(buf);
		return (0);
	}
	szw = write(STDOUT_FILENO, buf, sz);
	free(buf);
	if (sz != szw)
		return (0);
	return (szw);
}
