#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to concatenate
 *
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
		dest++;
	while (n-- && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}

/**
 * _strncpy - copies a string up to n bytes
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- && *src)
		*dest++ = *src++;
	while (n--)
		*dest++ = '\0';
	return (ptr);
}

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the constant byte
 * @n: number of bytes to fill
 *
 * Return: the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

