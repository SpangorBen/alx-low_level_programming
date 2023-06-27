#include "main.h"

/**
 * _strlen - len os string
 * @s: len of it
 * Return: len of s
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
