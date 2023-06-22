#include "main.h"

/**
 * print_triangle - triangle
 * @size: size of it
 * Return: none
*/

void print_triangle(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= size)
	{
		j = size;
		while (j >= 1)
		{
			if (i < j)
				_putchar(' ');
			else
				_putchar('#');
			j--;
		}
		_putchar('\n');
		i++;
	}
}
