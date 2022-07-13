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
	int l = 5;
	char vowel[5] = {'A', 'E', 'O', 'T', 'L' };
	char vowelnum[5] = {'4', '3', '0 , '7', '1' };

	while (s[a])
	{
		b = 0;
		while (b < l)
		{
			if (s[a] == vowel[b] || s[a] - 32 == vowel[b])
				s[a] = vowelnum[b];
			b++;
		}

		a++;
	}
	return (s);
}


