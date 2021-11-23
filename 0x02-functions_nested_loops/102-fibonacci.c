#include "main.h"
#include <stdio.h>

/**
 * main - 50 first number of Fibonnacci
 * Return: return 0
 */

int main(void)
{
	long int f1 = 0, f2 = 1, i;
	long int next;

	for (i = 0; i < 50; i++)
	{
		{
			next = f1 + f2;
			f1 = f2;
			f2 = next;
			printf("%ld", next);
			if (i != 49)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
