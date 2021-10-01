#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Alphabet in lowercase
 *
 * Return: return (0)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	{
		for (n = 'a'; n <= 'z'; n++)
			if ((n != 'q') && (n != 'e'))
				putchar(n);
		putchar('\n');
	}
/* your code goes there */
	return (0);
}
