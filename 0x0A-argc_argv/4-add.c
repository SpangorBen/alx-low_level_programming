#include "main.h"

/**
 * main - addition
 * @ac: nbr of args
 * @av: args
 * Return: 0
*/

int main(int ac, char **av)
{
	int i, j, sum;

	sum = 0;

	if (ac == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (!isdigit(av[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(av[i]);
	}
	printf("%d\n", sum);
	return (0);
}
