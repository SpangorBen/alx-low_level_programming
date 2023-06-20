#include "main.h"

/**
 * print_last_digit - last digit
 * @n: check value
 * Return: last digit of n
*/

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n *= -1;
	l = n % 10;
	_putchar('0' + l);
	return (l);
}
