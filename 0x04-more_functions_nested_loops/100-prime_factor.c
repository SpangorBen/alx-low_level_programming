#include "main.h"

/**
 * main - prime factor
 * Return: 0
*/

int main(void)
{
	long int i = 2;
	long int p;
	long int n = 612852475143;

	while (i <= n)
	{
		if (n % i == 0)
		{
			n = n / i;
			p = i;
		}
		i++;
	}
	printf("%ld\n", p);
	return (0);
}
