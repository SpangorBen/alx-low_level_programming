#include <unistd.h>

/**
* main - Entry point
*
* Description: 'the programs description'
*
* Return: always 0 (success)
*/
int	main(void)
{
	const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 60);
	return (0);
}
