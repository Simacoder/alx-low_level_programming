#include "main.h"

int check_prim(int, int);
/**
 * is_prime_number - function that returns 1 if true
 * @n: parameter
 * Return: return success
 */

int is_prime_number(int n)
{
	return (check_prim(n, 1));
}

/**
 * check_prim - cheking if it is prime
 * @s: parameter member
 * @n: parameter member
 * Return: return success
 */

int check_prim(int s, int n)
{
	if (s <= 1)
		return (0);
	if (s % n == 0 && n > 1)
		return (0);
	if ((s / n) < n)
		return (1);
	return (check_prim(s, n + 1));
}


