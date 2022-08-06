#include <stdio.h>

/**
 * array_iterator -function that executes a function given as a parameter
 * @array: parameter member
 * @size: prameter member
 * @action: parameter member
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

