#include "main.h"

/**
 * string_length - calculate the number of string
 * @s: s
 *
 * Return: nb string
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * palindrome_check- check if the first letter is the same as the last one
 * @s: s
 * @len: len
 * @i: i
 * Return: return
 */
int palindrome_check(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (palindrome_check(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - test if *s is null
 * @s: s
 * Return: natural square root or -1
*/
int is_palindrome(char *s)
{
	int i = 0;
	int len = string_length(s);

	if (*s == '\0')
		return (1);
	return (palindrome_check(s, len, i));
}
