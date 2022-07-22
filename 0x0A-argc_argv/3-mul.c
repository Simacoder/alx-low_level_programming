#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: parameter member
 * @argv: parameter member
 * Return: return 0 success
 */

int main(int argc, char *argv[])
{
	int result, numOne, numTwo;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	numOne = atoi(argv[1]);
	numTwo = atoi(argv[2]);
	result = numOne * numTwo;
	printf("%d\n", result);
	return (0);
}
