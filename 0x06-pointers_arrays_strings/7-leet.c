#include "main.h"

/**
 * leet - unction that encodes a string into 1337.
 * @s: parameter
 * Return: string
 */
char *leet(char *s)
{
	int a = 0;
	int b;
	char vowel[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T' };

	while (s[++a])
	{
		for (b == 0; b <= 7; b++)
		{
			if (s[a] == vowel[b] || s[a] - 32 == vowel[b])
				s[a] = b + '0';
		}
	}
	return (s);
}


