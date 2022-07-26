#include <unistd.h>

/**
 * _putchar - function that write out std
 * @c: paramemtr member
 * Return: on Success 1 and error -1 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
