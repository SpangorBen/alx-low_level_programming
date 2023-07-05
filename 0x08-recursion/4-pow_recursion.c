#include "main.h"

/**
 * _pow_recursion - power
 * @x: int
 * @y: int
 * Return: power of x
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
