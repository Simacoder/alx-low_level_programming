#include <unistd.h>

/**
 * _putchar - writes the char in stdout
 * @c: parameter member
 * Return: On success 1
 * On error, -1 returned and errono is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
