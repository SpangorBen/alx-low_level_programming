#include <stdio.h>

/**
 * main - print comb
 * Return: always 0
*/

int	main(void)
{
	int n = 0;
	int i;

	while (n < 100)
	{
		i = n + 1;
		while (i < 100)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
