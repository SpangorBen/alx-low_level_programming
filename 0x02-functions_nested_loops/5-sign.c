#include "main.h"

/**
 * print_sign - check sign
 * @n: number to check it's sign
 * Return: 1 if n positive 0 if n is zero and -1 if n is negative
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}
