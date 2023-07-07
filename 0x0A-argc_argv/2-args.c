#include "main.h"

/**
 * main - main
 * @ac: nbr of args
 * @av: args
 * Return: 0
*/

int main(int ac, char **av)
{
	int i = 0;

	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
