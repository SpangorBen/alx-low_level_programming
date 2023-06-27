#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: string
 * Return: the integer value
*/

int _atoi(char *s)
{
	int i = 0;
	int r = 0;
	int si = 1;

	if (s[i] == '-')
	{
		si = -1;
		i++;
	}
	while (s[i])
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r * si);
}
