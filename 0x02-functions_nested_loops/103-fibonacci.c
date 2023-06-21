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
	long m = 0, n = 1;

	while (i < 50)
	{
		r = n + m;
		n = m;
		m = r;
		if (r % 2 == 0 && r < 4000000)
			sum += r;
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}
