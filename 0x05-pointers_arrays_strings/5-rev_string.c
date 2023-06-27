#include "main.h"

/**
 * rev_string - rev string
 * @s: string to rev
 * Return: none
*/

void rev_string(char *s)
{
	char tmp;
	int i = 0;
	int len = 0;

	while (s[len])
		len++;
	len--;
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}
}
