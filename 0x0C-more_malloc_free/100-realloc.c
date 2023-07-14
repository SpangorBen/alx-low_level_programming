#include "main.h"

/**
 * *_realloc - realloc memory
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: new allocated pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *castptr;
	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size * sizeof(char));
		castptr = ptr;
		for (i = 0; i < old_size; i++)
			p[i] = castptr[i];
		free(ptr);
		return (p);
	}
	return (ptr);
}
