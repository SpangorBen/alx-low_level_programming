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
			if (r > 9)
			{
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			else
			{
				_putchar('0' + r);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (r < 10)
					_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
