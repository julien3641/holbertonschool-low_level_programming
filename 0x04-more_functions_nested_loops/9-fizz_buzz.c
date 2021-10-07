#include <stdio.h>
#include "main.h"

/**
 * main - de 1 à 100 Fizz Fuzz FizzBuzz
 *
 * Return: 1 or 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15 == 0))
			printf("FizzBuzz");
		else if	(i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
