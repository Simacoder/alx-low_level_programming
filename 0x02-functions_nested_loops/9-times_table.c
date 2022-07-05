#include "main.h"
/**
 * times_table -function that prints the 9 times table, starting with 0
 * Rturn: Always 0 if success
 */
void times_table(void)
{
	int n, m, z;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			z = n * m;
			if (m == 0)
				_putchar(z + '0');
			if (m != 0 && z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			} else if (z  >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

