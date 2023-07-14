#include "main.h"

/**
 * *_calloc - calloc
 * @nmemb: int
 * @size: int
 * Return: none
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);
}
