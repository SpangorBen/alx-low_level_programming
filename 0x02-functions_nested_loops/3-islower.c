#include "main.h"

/**
 * _islower - check if c is a lowercase
 * @c: the character to check
 * Return: 1 if true and 0 if not
*/

int	_islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
