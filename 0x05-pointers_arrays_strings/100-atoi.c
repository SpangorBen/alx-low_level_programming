#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: string
 * Return: the integer value
*/

int _atoi(char *s)
{
	short boolean = 0;
	int i = 0, si = 1, r = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			si = -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			r = r * 10 + (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	return (r * si);
}
