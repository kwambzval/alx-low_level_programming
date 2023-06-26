#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: input string to search in
 * @needle: substring to search for
 *
 * Return: If the substring is found, return a pointer to the beginning of the
 *         substring; otherwise, return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}

