#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the executable name file
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", (num1 * num2));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
