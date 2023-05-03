#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * was available or str is NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* get the length of the string */
	while (str[len] != '\0')
		len++;

	/* allocate memory for the duplicate string */
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	/* copy the string */
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}

	/* add null terminator */
	dup_str[len] = '\0';

	return (dup_str);
}

