#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: parameter member
 * Return: return success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

