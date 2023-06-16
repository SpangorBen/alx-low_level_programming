#include <stdio.h>

/**
 * main - print comb
 *
 * Return: 0 is good
*/

int	main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
