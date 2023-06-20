#include "main.h"

/**
 * main - fibonacci
 * Return: 0
*/

int	main(void)
{
	long n = 1;
	long m = 2;
	long r;
	int i = 0;

	while (i < 50)
	{
		r = n + m;
		printf("%ld", n);
		if (i < 49)
			printf(", ");
		n = m;
		m = r;
		i++;
	}
	return (0);
}
