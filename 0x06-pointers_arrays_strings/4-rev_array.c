#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter member
 * @n: parameter member
 * Return: a integer
 */

void reverse_array(int *a, int n)
{
	int p, k;

	for (k = n - 1; k > n / 2; k--)
	{
		p = a[n - 1 - k];
		a[n - 1 - k] = a[k];
		a[k] = p;
	}
}
