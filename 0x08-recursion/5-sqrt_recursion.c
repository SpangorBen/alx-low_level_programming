#include "main.h"

/**
 * checker - checks to sqrt
 * @n: number
 * @y: number
 * Return: sqrt of y
*/

int checker(int n, int y)
{
	if (n * n == y)
		return (n);
	if (n * n > y)
		return (-1);
	return (checker(n + 1, y));
}

/**
 * _sqrt_recursion - sqrt
 * @n: number
 * Return: sqrt of n
*/

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
