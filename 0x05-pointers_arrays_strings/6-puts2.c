#include "main.h"

/**
 * puts2 - puts
 * @str: str to print
 * Return: none
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
}
