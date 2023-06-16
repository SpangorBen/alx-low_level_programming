#include <stdio.h>

/**
 * main - print tebahpla
 *
 * Return: always 0
*/

int	main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
