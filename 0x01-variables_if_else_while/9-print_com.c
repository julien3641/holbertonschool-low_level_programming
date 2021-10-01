#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - combinaisons of single-digit numbers
 *
 * Return: return (0)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	{
		for (n = '0' ; n <= '9' ; n++)
		{
			putchar(n);
			if (n != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
/* your code goes there */
	return (0);
}
