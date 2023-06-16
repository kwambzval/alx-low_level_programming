#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 *
 * Return: pointer to duplicate string or NULL if string is NULL
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup_str[i] = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}

	dup_str[len = '\0';

	return (dup_str);
}

