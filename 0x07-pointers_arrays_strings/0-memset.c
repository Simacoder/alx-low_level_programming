#include "main.h"

/**
 * _memset - this function is the memory set
 * @s: paramemter member
 * @b: a character parameter member
 * @n: parameter memeber intger
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
