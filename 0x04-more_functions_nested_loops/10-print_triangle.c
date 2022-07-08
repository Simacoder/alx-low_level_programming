#include "main.h"

/**
 * print_triangle - check for a digit numbers
 * @size: parameter member
 * Return: void
 */

void print_triangle(int size)
{
	while (size <=  0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
