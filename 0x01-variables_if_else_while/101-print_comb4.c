#include <stdio.h>

/**
 * main - print comb
 * Return: always 0
*/

int	main(void)
{
	int n = '0';
	int i;
	int	j;

	while (n <= '9')
	{
		i = n + 1;
		while (i <= '9')
		{
			j = i + 1;
			while (j <= '9')
			{
				putchar(n);
				putchar(i);
				putchar(j);
				if (n < '7')
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
