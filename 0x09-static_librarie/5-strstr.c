#include "main.h"

/**
 * *_strstr - Entry point
 * Description: Locates a substring
 * @haystack: Character
 * @needle: Character
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	/* If the needle is an empty string, return the haystack */
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
