#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal sums
 * @a: parameter member
 * @size: array size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, length;
	unsigned int sum_diag1, sum_diag2;

	length = 0;
	sum_diag1 = 0;
	sum_diag2 = 0;
	length = (length * length) - 1;
	for (i = 0; i <= length; i = i + (length + 1))
	{
		sum_diag1 += a[i];
	}
	for (i = (length - 1); i < length; i = i + (length - 1))
	{
		sum_diag2 += a[i];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
