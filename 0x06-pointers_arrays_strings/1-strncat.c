#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest: parameter member
 * @src: parameter member
 * @n: parameter member
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
