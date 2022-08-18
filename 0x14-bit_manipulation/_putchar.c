#include <unistd.h>

/**
 * _putchar - print out statement std
 * @c: parameter member
 * Return: 1 success and -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
