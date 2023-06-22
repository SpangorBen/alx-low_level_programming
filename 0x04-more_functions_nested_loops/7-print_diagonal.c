#include "main.h"

/**
 * print_diagonal - diagonal
 * @n: number
 * Return: none
*/

void print_diagonal(int n)
{
	int i = 1, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			if (j != 1)
				_putchar(' ');
			if (j == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
