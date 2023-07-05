#include <stdio.h>
#include <stdlib.h>

int calculate_minimum_coins(int cents);

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2 || argv[1] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = calculate_minimum_coins(cents);
	printf("%d\n", coins);

	return (0);
}

/**
 * calculate_minimum_coins - Calculate the minimum number of coins required
 * @cents: Amount of cents
 *
 * Return: Minimum number of coins
 */
int calculate_minimum_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}

	return (coins);
}

