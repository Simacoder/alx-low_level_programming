#include <stdio.h>

/**
 * main - function to print name
 * @argc: parameter member
 * @argv: parameter member
 * Return: 0 success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
