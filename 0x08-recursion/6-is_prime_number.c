#include "main.h"

/**
  * checker - checks if prime
  * @n: number
  * @y: number
  * Return: 1 if n is a prime, else return 0 otherwise.
*/

int checker(int n, int y)
{
	if (y % n == 0 || y < 2)
		return (0);
	else if (n == y - 1)
		return (1);
	else if (y > n)
		return (checker(n + 1, y));
	return (1);
}

/**
 * is_prime_number - prime
 * @n: number
 * Return: 1 if prime, o otherwise
*/

int is_prime_number(int n)
{
	return (checker(2, n));
}
