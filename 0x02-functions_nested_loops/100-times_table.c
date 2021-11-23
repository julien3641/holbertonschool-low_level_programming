#include "main.h"

void print_times_table(int n);

/**
 * print_times_table - print n times table starting from 0
 * @n: number of times tables
 */

void print_times_table(int n)
{
	int num1, num2, c;

	if (n <= 15 && n >= 0)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				c = num1 * num2;
				if (num2 == 0)
					_putchar(num2 + '0');
				else if (c <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(c / 100 + '0');
					_putchar(c / 10 % 10 + '0');
					_putchar(c % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
