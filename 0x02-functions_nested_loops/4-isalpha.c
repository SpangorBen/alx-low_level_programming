#include "main.h"

/**
 * _isalpha - check alphabet
 * @c: check c
 * Return: 1 if c is alphabet and 0 if not
*/

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
