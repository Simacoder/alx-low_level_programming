#include "main.h"

/**
 * print_rev -function that prints a string, in reverse, followed by a new line
 * @s: parameter member
 */

void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		for (n = n - 1; s[n] != '\0'; n--)
		{
			_putchar(s[i]);
		}
	_putchar('\n');
}
