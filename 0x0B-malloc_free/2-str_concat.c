#include "main.h"

/**
 * *str_concat - concatenation of 2 strings
 * @s1: first string
 * @s2: second string
 * Return: buffer
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int l1 = 0, l2 = 0;
	char buffer;

	if (!s1)
		return (NULL);
	while (s1)
		l1++;
	while (s2)
		l2++;
	buffer = malloc(l1 + l2 + 1);
	if (!buffer)
		return (NULL);
	while (s1)
	{
		buffer[i] = s1[i];
		i++;
	}
	while (s2)
	{
		buffer[i] = s2[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
