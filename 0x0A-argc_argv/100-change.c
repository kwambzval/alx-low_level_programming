#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, numCoins, count, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Usage: %s <cents>\n", argv[0]);
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	numCoins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < numCoins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", count);
	return (0);
}

