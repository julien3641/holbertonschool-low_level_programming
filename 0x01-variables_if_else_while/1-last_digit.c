#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - last digit
 *
 * Return: return (0)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
	if (n > 5)
		printf("Last digit of %d is %d and greater than 5\n", n, lastdigit);
	}
	{
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	{
	else
		printf("Last digit %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
/* your code goes there */
	return (0);
}
