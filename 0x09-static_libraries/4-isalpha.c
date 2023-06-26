#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if the character is an alphabet
 * @c: the character to be checked
 *
 * Return: 0 if false and 1 if true
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

