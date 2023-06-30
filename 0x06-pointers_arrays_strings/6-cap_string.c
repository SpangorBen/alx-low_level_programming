#include "main.h"

/**
 * *cap_string - Entry point
 * Description: Capitalizes all words of a string
 * @str: String
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;
	int cap = 1;

	while (str[i] != '\0')
	{
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				cap = 1;
				break;
			default:
				if (cap)
				{
					str[i] = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 'a' + 'A' : str[i];
					cap = 0;
				}
				break;
		}
		i++;
	}
	return (str);
}
