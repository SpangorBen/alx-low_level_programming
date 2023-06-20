#include "main.h"

/**
 * print_alphabet - print alphabet
 * Return: void
*/

void	print_alphabet(void)
{
	int	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
