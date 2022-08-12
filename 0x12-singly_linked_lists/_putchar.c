#include <unistd.h>

/**
 * _putchar - function wrti out std
 * @c: parametr member
 * Return: return 1 success and eror -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
