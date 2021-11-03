#include "3-calc.h"

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	if (*operator != '+' && *operator != '*'
	    && *operator != '/' && *operator != '%' && *operator != '-')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	fp = get_op_func(operator);
	printf("%d\n", (fp(num1, num2)));
	return (0);
}
