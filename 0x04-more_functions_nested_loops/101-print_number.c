#include "main.h"

/**
 * print_number - number
 * @n: number to print
 * Return: none
*/

void print_number(int n)
{
	int i = 1;
	int len = 1;
	int div = 1;
	unsigned int r;
	unsigned int l = n;

	if (n < 0)
	{
		l *= -n;
		_putchar('-');
	}
	r = l;
	while (r >= 10)
	{
		len++;
		r /= 10;
	}
	while (i < len)
	{
		div *= 10;
		i++;
	}
	while (div > 1)
	{
		_putchar((l / div) % 10 + '0');
		div /= 10;
	}
	_putchar(l % 10 + '0');
}
