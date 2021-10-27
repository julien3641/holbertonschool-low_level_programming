#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - print the sum of all argv puts in
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coins, i;
	int change[5] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
			return (1);
	}
	cents = atoi(argv[1]);
	for (i = 0; cents > 0; i++)
	{
		coins += cents / change[i];
		cents %= change[i];
	}
	printf("%d\n", coins);
	return (0);
}
