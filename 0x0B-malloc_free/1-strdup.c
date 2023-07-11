#include "main.h"

/**
 * *_strdup - duplicate
 * @str: string
 * Return: new duplicated string
*/

char *_strdup(char *str)
{
	int len = 0, i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[len] = '\0';
	return (copy);
}
