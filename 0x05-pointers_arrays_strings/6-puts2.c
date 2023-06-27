#include "main.h"

/**
 * puts2 - puts
 * @str: str to print
 * Return: none
*/

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len])
		len++;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
