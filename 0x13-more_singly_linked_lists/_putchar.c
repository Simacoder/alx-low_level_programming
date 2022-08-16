#include <unistd.h>


/**
 * _putchar - functions that write out std
 * @c: parameter member
 * Return: suceess 1 or error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
