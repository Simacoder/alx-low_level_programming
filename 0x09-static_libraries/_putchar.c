#include <unistd.h>

/**
 * _putchar - function write the character out
 * @c: paramemter member
 * Return: 0 success, error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
