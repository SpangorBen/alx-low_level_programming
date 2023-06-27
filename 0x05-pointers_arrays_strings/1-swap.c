#include "main.h"

/**
 * swap_int - swap
 * @a: to swap
 * @b: to swap
 * return: none
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
