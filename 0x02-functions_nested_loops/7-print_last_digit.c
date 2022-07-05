#include "main.h"
/**
 * print_last_digit -function that prints the last digit of a number
 * @n: parameter member n
 * Return: always o if success
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	_putchar('\n');
	return (x);
}
