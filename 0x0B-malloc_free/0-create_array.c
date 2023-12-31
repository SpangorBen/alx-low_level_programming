#include "main.h"

/**
 * *create_array - array
 * @size: size of the array
 * @c: character in the new array
 * Return: the array
*/

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	buffer = malloc(size * sizeof(char));
	if (!buffer)
		return (NULL);
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
