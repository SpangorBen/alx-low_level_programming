#include "main.h"

/**
 * *_strncat - Entry point
 * Description: Concatenates two strings
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n-- > 0)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
