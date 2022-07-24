#include "main.h"

/**
 * _strspn - print the consecutive character
 * @s: parameter member
 * @admit: parameter member
 * Return: string
 */

unsigned int _strspn(char *s, char *admit)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(admit + i); i++)
		{
			if (*(s + j) == *(admit + i))
				break;
		}
		if (*(admit + i) == '\0')
			break;
	}
	return (j);
}

