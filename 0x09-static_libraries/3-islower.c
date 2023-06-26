#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if a character is in lower case.
 * @c: the character to be checked.
 *
 * Return: 1 if true and 0 if false
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

