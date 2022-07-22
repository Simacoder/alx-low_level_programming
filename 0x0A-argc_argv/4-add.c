#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: paramemter member
 * @argv: parmeter member
 * Return: return 0 success
 */

int main(int argc, char *argv[])
{
	int sum = 0, num, i, j, z;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		num = atoi(argv[z]);
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
