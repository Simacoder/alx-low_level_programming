#include "main.h"
/**
 * times_table -function that prints the 9 times table, starting with 0
 * Rturn: Always 0 if success
 */
void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{

		int products;

		products = n * m;
		_putchar(products);
		_putchar('\n');
		}
	}
}

