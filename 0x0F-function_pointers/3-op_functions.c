#include "3-calc.h"
/**
 * op_add - return sum
 * @a: parameter member
 * @b: paraeter member
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function substraction
 * @a: paramemtr member
 * @b: parameter meber
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function products
 * @a: parameter member
 * @b: parameter member
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- function division
 * @a: parameter meber
 * @b: paramter member
 * Return: divide
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - r=function remiander
 * @a: parameter member
 * @b: parameter member
 * Return: remainnder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
