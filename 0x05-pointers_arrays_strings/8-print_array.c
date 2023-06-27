#include "main.h"

/**
 * print_array - print array
 * @a: array to print
 * @n: size of the print
 * Return: none
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ")
		i++;
	}
	printf("\n");
}
