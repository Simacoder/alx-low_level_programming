#include "main.h"

/**
 * more_numbers - funtion that print 10 numbers
 * Return: Always
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
