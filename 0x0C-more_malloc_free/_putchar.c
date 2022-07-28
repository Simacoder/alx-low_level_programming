#include <unistd.h>

/**
 * _putchar - writing charractre out
 * @c: parameter member
 * Return: 0 succes -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
