#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _puts - prints a string to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination string
 * @src: the source string
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;

	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
		sign = (*s++ == '-') ? -1 : 1;
	while (*s >= '0' && *s <= '9')
		result = result * 10 + (*s++ - '0');
	return (sign * result);
}

