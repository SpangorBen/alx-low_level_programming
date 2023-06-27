#include "main.h"

/**
 * _puts - puts
 * @str: string to write
 * Return: none
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
