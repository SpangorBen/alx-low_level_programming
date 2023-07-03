#include "main.h"

/**
 * set_string - Entry point
 * Description: Sets the value of a pointer to a char
 * @s: Character
 * @to: Character
 */

void set_string(char **s, char *to)
{
	if (to == NULL)
		return;
	if (!to)
	{
		free(to);
		to = NULL;
	}
	if (!to)
	{
		*s = malloc(1024);
		while (to)
		{
			*s++ = to++;
		}
	}
}
