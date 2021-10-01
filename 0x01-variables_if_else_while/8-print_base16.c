#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Hexadecimal
 *
 * Return: return (0)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	{
		for (n = '0'; n <= '9'; n++)
			putchar(n);
		for (n = 'a'; n <= 'f'; n++)
			putchar(n);
		putchar('\n');
	}
/* your code goes there */
	return (0);
}
