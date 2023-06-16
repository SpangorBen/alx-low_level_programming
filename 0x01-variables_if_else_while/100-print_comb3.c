#include <stdio.h>

/**
 * main - print comb
 * Return: always 0
*/

int	main(void)
{
	int n = '0';
	int	i;

	while (n <= '9')
	{
		i = n + 1;
		while (i <= '9')
		{
			putchar(n);
			putchar(i);
			if (n < '8')
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
