#include "main.h"

/**
 * print_rev -function that prints a string, in reverse, followed by a new line
 * @s: parameter member
 */

void print_rev(char *s)
{
	int n, i;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
