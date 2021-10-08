#include <math.h>
#include <stdio.h>

/**
 * main - max prime Factors
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143, i;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
