#include "main.h"

/**
 * print_rev - rev of str
 * @s: string to rev
 * Return: none
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
