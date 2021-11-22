#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}

/**
 * create_file - a function to create a file
 * @filename: filename
 * @text_content: text content
 * Return: return
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buf;

	if (filename == NULL)
		return (-1);
	buf = malloc((_strlen(text_content)) * sizeof(char));
	if (buf == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	free(buf);
	close(fd);
	return (1);
}
