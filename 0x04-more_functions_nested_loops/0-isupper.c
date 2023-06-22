/**
 * _isupper - check uppercase
 * @c: character to check
 * Return: 1 if its true and 0 if false
*/

int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
		i = 1;
	else
		i = 0;
	return (i);
}
