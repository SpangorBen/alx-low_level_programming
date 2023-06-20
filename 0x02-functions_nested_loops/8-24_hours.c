#include "main.h"

/**
 * jack_bauer - 24 hours
 * Return: none
*/

void jack_bauer(void)
{
	int m = 0;
	int s = 0;

	while (m < 24)
	{
		s = 0;
		while (s <= 59)
		{
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar(':');
			_putchar('0' + s / 10);
			_putchar('0' + s % 10);
			_putchar('\n');
			s++;
		}
		m++;
	}
}
