#include "main.h"

/**
 * print_diagonal - diagonal
 * @n: number
 * Return: none
*/

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			if (i != 0)
				_putchar(' ');
			if (j == (i - 1))
			{
				_putchar('\\');
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
