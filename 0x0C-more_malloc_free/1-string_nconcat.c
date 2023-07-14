#include "main.h"

/**
 * *string_nconcat - concatenation
 * @s1: string
 * @s2: string
 * @n: int
 * Return: result
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len;
	char *result;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
		n = s2_len;
	result = malloc(s1_len + n + 1);
	if (!result)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
