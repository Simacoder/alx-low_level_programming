#include "main.h"

/**
 * _strpbrk -print the characters
 * @s: parameter member
 * @accept: parameter member
 * Return: a string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}

	}
	return (0);
}
