#include "main.h"

/**
 * *str_concat - concatenation of 2 strings
 * @s1: first string
 * @s2: second string
 * Return: buffer
*/

char *str_concat(char *s1, char *s2)
{
	int len = 0, i, j = 0;
	char *ans;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	ans = malloc((len) * sizeof(char));
	if (ans == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ans[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		ans[j++] = s2[i];
	}
	return (ans);
}
