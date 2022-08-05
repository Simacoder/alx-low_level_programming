#include <unistd.h>

/**
 * _putchar - function write out the characters
 * @c: parametr member
 * Return: 1 succes ,error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
