#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory containing s1 followed by
 * s2, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1 = 0, len2 = 0, i, j;

	/* handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get the lengths of the strings */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* allocate memory for the concatenated string */
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	/* copy the first string */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* copy the second string */
	for (j = 0; j < len2; j++)
	{
		concat_str[i] = s2[j];
		i++;
	}

	/* add null terminator */
	concat_str[i] = '\0';

	return (concat_str);
}

