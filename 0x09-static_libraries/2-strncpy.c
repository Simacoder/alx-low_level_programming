#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: parameter member
 * @src: parameter member
 * @n: parameter member
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
