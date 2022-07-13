#include <unistd.h>

/**
 * _putchar - writes the characters in stdout
 * @c: parameter member
 * Return: on success 1
 * On error, -1 is returned , and errno is set.
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
