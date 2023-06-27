#include "main.h"

/**
 * puts_half - puts
 * @str: string to print half
 * Return: none
*/

void puts_half(char *str)
{
	int len = 0, i = 0;

	while (str[len])
		len++;
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
