#include <stdio.h>
#include "main.h"

/**
 * main - print the executable name file
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
