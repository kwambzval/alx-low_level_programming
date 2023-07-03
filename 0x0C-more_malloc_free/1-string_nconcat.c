#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated concatenated string
 *         NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, concat_len = 0;
	char *concat;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	concat_len = len1 + n;
	concat = malloc(sizeof(char) * (concat_len + 1));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i++] = s2[j];
	concat[concat_len] = '\0';

	return (concat);
}

