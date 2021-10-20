#include "main.h"

/**
 * prime_check - checks for the prime number
 * @g: g
 * @num: num
 *
 * Return: -1 or sqrt of c
 */
int prime_check(int g, int num)
{
	if (num % g == 0)
		return (0);
	else if (g > num / 2)
		return (1);
	else
		return (prime_check(g + 1, num));
}

/**
 * is_prime_number - states if number is prime
 * @n: n
 *
 * Return: natural square root or -1
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n <= 1)
		return (0);
	return (prime_check(2, n));
}
