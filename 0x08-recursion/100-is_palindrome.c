#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Recursive helper function
 * to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

