#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: parameter member
 * Return: return success
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive of the squre root
 * @n: parameter member
 * @s: parameter
 * Return: return success
 */

int _sqrt(int n, int s)
{
	int square = s * s;

	if (square > n)
		return (-1);
	if (square == n)
		return (s);
	return (_sqrt(n, s + 1));
}
