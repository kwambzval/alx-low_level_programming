#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int i, words = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				in_word = 0;
				words++;
			}
		}
		else
		{
			in_word = 1;
		}
	}
	if (in_word)
		words++;
	return (words);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0, k = 0; i < words; i++)
	{
		while (*str == ' ')
			str++;
		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
			len++;
		arr[i] = malloc(sizeof(char) * (len + 1));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			arr[i][j] = str[j];
		arr[i][j] = '\0';
		str += len;
		k += len;
	}
	arr[words] = NULL;
	return (arr);
}
#endif

