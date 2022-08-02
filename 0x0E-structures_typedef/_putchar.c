#include <unistd.h>

/**
 * _putchar - function write out characters
 * @c: parameter member
 * Return:0 succes and -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
