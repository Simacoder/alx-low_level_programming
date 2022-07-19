#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: parameter member
 * @c: parameter member
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int a = 0;
	int b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s = s + b;
		return (s);
	}
	return ('\0');
}
