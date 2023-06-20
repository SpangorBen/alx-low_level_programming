#include "main.h"

/**
 * print_alphabet_x10 - print 10 times
 * Return: void
*/

void	print_alphabet_x10(void)
{
	int	i = 0;
	int c = 'a';

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
