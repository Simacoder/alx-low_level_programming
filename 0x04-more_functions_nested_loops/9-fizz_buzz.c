#include <stdio.h>

/**
 * main - print nmber from 1 to 98
 * Return: Always 0 success
 */

int main(void)
{
	int h = 100;
	int i = 1;

	while (i <= h)
	{
		if (i % 3 == 0 &&  i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
		if (i < h)
		printf("Buzz ");
		else
			printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);

}

