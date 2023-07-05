#include "main.h"

/**
 * factorial - facto
 * @n: number
 * Return: factorial of n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
