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
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
