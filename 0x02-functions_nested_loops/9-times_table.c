#include "main.h"

/**
 * times_table - time
 * Return: none
*/

void times_table(void)
{
	int i = 0;
	int j = 0;
	int r;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			r = j * i;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r > 9)
			{
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			else if (r <= 9 && j != 0)
			{
				_putchar(' ');
				_putchar('0' + r);
			}
			else
				_putchar('0' + r);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
