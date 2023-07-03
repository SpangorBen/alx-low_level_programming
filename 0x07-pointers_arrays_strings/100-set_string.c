#include "main.h"

/**
 * set_string - Entry point
 * Description: Sets the value of a pointer to a char
 * @s: Character
 * @to: Character
 */

void set_string(char **s, char *to)
{
	if (*s == NULL)
		return;
	if (!*s)
	{
		free(to);
		to = NULL;
	}
	if (!*s)
	{
		to = malloc(1024);
		strcpy(to, *s);
}
