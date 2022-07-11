#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c:  paramter member
 * Return: 0 success 1
 * On eror, -1 i returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
