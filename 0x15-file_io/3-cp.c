#include "main.h"

/**
 * main - main
 * @argc: number of arguments
 * @argv: an array of my arguments
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	int from, to, r, w, c1, c2;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]), exit(98);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]), exit(99);
	while ((r = read(from, buffer, BUFSIZ)) > 0)
	{
		w = write(to, buffer, r);
		if (w != r || w == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]), exit(98);
	c1 = close(from);
	c2 = close(to);
	if (c1 == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", from), exit(100);
	if (c2 == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", from), exit(100);
	return (0);
}
