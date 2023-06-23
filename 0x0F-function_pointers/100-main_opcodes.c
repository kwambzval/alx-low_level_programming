#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on sucess, 1 if the number of arguments is incorrect, 2
 * if bytes is negative
 */

int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
			return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%.2x", *((unsigned char *)main + i));

		if (i == n - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}

