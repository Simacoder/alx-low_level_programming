#include "main.h"

/**
 * string_toupper -function that changes wercase letters of a str to upper
 * @s: parameter member
 * Return: string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
