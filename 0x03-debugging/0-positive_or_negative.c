#include <stdlib.h>
#include <stdio.h>
/**
 * positive_or_negative - test if positive or negative
 * main - test if it negative or positive
 * @i: parameter member
 * Return: Always o success
 */
void positive_or_negative(int i)
{
	int n;

	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
