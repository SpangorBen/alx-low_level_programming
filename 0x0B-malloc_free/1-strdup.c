#include "main.h"

/**
 * *_strdup - duplicate
 * @str: string
 * Return: new duplicated string
*/

char *_strdup(char *str)
{
	int i = 0;
	int l = 1;
	char *dup;

	if (!str)
		return (NULL);
	while (str)
		l++;
	dup = malloc(l);
	if(!dup)
		return (NULL);
	while (str)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
