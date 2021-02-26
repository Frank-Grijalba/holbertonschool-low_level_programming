#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * compare - check if string is a palindrome
 * @s: The string to check
 * @n: The size of string -1
 * @i: counter through string
 * 
 * Return: 1 is palindrome, 0 is not palindrome
 **/

int compare(char *s, int n, int i)
{
	if (n <= i)
	{
		return (1);
	}
	if (s[i] != s[n])
	{
		return (0);
	}
	else
		return (compare(s, n - 1, i + 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 *
 * @s: string to check
 * 
 * Return: 1 is palindrome, 0 is not palindrome
 **/

int is_palindrome(char *s)
{
	return (compare(s, _strlen_recursion(s) - 1, 0));
}
