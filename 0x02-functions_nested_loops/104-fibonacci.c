#include "main.h"

/**
 * main - fibonacci
 * Return: 0
*/

int	main(void)
{
	int i = 0;
	unsigned long r, n = 1, m = 2;

	while (i < 98)
	{
		r = n + m;
		printf("%ld", n);
		if (i < 97)
			printf(", ");
		n = m;
		m = r;
		i++;
	}
	return (0);
}
