#include "main.h"

/**
 * main - main
 * @ac: nbr of args
 * @av: args
 * Return: 0
*/

int main(int ac, char **av)
{
	int i, coins, cents, num_denom;
	int denominations[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(av[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	num_denom = sizeof(denominations) / sizeof(denominations[0]);

	for (i = 0; i < num_denom; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}
	printf("%d\n", coins);
	return (0);
}
