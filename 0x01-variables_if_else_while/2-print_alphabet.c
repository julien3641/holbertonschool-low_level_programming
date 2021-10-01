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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
		putchar ('\n');
		getch();
	}
/* your code goes there */
	return (0);
}
