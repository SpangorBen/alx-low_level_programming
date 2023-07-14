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
	char *p;
	unsigned int s1count, s2count, sizeBuffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	s2count > n ? (s2count = n) : (n = s2count);
	sizeBuffer = s1count + s2count + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer - 1; i++)
		i < s1count ? (p[i] = s1[i]) : (p[i] = s2[i - s1count]);
	p[sizeBuffer] = '\0';
	return (p);
}
