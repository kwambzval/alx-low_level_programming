#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to locate
 *
 * Return: pointer to first occurrence of character,NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring of accepted characters
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
		}
		if (*a == '\0')
			return (count);
		s++;
	}
	return (count);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the set of bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: pointer to beginning of located substring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n;

	if (*needle == '\0')
		return (haystack);

	while (*h)
	{
		n = needle;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (h - (n - needle));
		h = h - (n - needle) + 1;
	}
	return (NULL);
}

