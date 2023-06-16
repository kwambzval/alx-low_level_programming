#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Prints natural square root of a number
 * @n: The number whos natural root u are to find
 *
 * Return: The ntural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
        return -1;

    return sqrt_helper(n, 1);
}

