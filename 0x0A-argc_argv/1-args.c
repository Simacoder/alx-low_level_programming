#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: parameter member
 * @argv: parameter member
 * Return: return 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
