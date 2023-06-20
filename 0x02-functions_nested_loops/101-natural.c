#include "main.h"

/**
 * main - sum of numbers
 * Return: 0
*/

int main(void)
{
	int s = 0;
	int i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			s = s + i;
		i++;
	}
	printf("%d\n", s);
	return (0);
}
