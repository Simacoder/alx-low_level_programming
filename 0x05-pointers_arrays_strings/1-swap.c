#include "main.h"

/**
 * swap_int - function swapping integers
 * @a: parameter member
 * @b: paramter member
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
