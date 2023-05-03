#include "holberton.h"
#include <stdlib.h>
/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be checked.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL or if memory allocation fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **array;
	int i, j, k, n = 0, words = 0, len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	array = malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] && str[j] != ' '; j++)
				len++;

			array[n] = malloc(sizeof(char) * (len + 1));
			if (array[n] == NULL)
			{
				for (k = 0; k < n; k++)
					ree(array[k]);
				free(array);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				array[n][k] = str[i + k];
			array[n][k] = '\0';
			n++;
			i += len;
		}
	}
	array[n] = NULL;
	return (array);
}

