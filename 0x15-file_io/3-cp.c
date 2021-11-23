#include "main.h"

/**
 * main - main
 * @argc: number of arguments
 * @argv: an array of my arguments
 * Return: return 0
*/

int main(int argc, char *argv[], ...)
{
	int from, to, r, w, cf, ct;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, BUFSIZ);
	if (from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(to, buffer, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(from);
	close(to);
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
}
