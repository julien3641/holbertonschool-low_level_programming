#include<stdio.h>

/**
 * main - show Size of Files
 *
 * printf - Size files
 * Return: do not exceed 80 column per ligne
 */
int main(void)
{
	char chartype;
	int intType;
	long longType;
	long long int longlongintType;
	float FloatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(FloatType));
	return (0);
}
