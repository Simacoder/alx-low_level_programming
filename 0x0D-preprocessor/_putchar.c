#include <unistd.h>

/**
 * _putchar - function that write out characters
 * @c: parameter member
 * Return: success 1 and -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
