#include "main.h"

/**
 * main - fibonacci sum
 * Return: 0
*/

int	main(void)
{
	int	i = 0;
	long r;
	long sum;
	long m = 2, n = 1;

	while (i < 50)
	{
		r = n + m;
		n = m;
		m = r;
		if (n % 2 == 0 && n <= 4000000)
			sum += n;
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
