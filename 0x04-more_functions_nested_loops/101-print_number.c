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
	int r;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	r = n;
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
		_putchar((n / div) % 10 + '0');
		div /= 10;
	}
	_putchar(n % 10 + '0');
}
