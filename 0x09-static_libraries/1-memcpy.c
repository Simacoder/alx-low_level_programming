#include "main.h"

/**
 * _memcpy - the function to copy the memory
 * @dest: parameter member
 * @src: parameter member
 * @n: parameter member
 * Return: a character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
