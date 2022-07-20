#include <unistd.h>

/**
 * _putchar - writes the putput of the function
 * @c: parameter member
 * Return: On success 1
 * On error -1 errono set appropriate
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
