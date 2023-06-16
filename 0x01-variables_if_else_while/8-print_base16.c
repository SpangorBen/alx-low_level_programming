#include <stdio.h>

/**
 * main - print base16
 *
 * Return: always 0
*/

int	main(void)
{
	int n = 48;
	char c = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
