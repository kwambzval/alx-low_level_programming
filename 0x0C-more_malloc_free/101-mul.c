#include <stdio.h>
#include <stdlib.h>

unsigned int multiply(unsigned int num1, unsigned int num2);
int is_valid_number(char *str);

/**
 * multiply - Multiplies two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Result of the multiplication
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	return (num1 * num2);
}

/**
 * is_valid_number - Checks if the given string is a valid number
 * @str: Input string
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int is_valid_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;
	char command[100];

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%u\n", result);

	/* Verify the result using bc */
	sprintf(command, "echo '%u * %u' | bc", num1, num2);
	printf("Verification: ");
	fflush(stdout);
	system(command);

	return (0);
}

