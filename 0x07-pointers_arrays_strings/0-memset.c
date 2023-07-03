#include "main.h"

/**
 * *_memset - memset func
 * @s: string
 * @b: constant
 * @n: size
 * Return: string s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
