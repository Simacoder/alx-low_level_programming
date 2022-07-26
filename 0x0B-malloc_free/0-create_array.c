#include "mani.h"

/**
 * create_array - function that creates an array of chars
 * @size: parameter member
 * @c: parameter
 * Return: return 0 seccus
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i == 0; i < size; i++)
		s[i] = c;
	return (s);
}
