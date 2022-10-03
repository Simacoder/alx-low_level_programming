#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src including the terminating
 * null byte \0, to the buffer pointed to by dest.
 * @dest: the buffer
 * @src: string being copied
 * @n: parameter member
 * Return: dest
 */
char *_strcpy(char *dest, char *src, int n)
{
	char *cpyresult = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (cpyresult);
}
