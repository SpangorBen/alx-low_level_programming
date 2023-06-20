#include "main.h"

/**
 * print_times_table - print table
 * @n: table size
 * Return: none
*/

void	print_times_table(int n)
{
	int i = 0, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = j * i;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (r > 9 && r < 100)
				{
					_putchar(' ');
					_putchar('0' + r / 10);
					_putchar('0' + r % 10);
				}
				else if (r > 99)
				{
					_putchar('0' + r / 100);
					_putchar('0' + (r / 10) % 10);
					_putchar('0' + r % 10);
				}
				else if (r <= 9 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r);
				}
				else
					_putchar('0' + r);
			}
			_putchar('\n');
		}
	}
}
