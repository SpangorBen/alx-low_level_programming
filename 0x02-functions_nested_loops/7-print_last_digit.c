#include "main.h"

/**
 * print_last_digit - last digit
 * @n: check value
 * Return: last digit of n
*/

int print_last_digit(int n)
{
	int l;
	long c = n;

	if (c < 0)
		c *= -1;
	l = c % 10;
	_putchar('0' + l);
	return (l);
}
