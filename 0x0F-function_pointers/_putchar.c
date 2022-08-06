#include <unistd.h>

/**
 * _putchar - function write out char
 * @c: parameter member
 * Return: succuss 1 and -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
