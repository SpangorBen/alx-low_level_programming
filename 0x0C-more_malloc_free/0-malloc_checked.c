#include "main.h"

/**
 * *malloc_checked - malloc
 * @b: int
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
