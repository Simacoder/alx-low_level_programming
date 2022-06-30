#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if successfully, otherweise failed
 */
int main(void)
{
printf("Size of a char: %d bytes \n", sizeof(char));
printf("Size of an int: %d bytes \n", sizeof(int));
printf("Size of a log int: %d bytes \n", sizeof(long int));
printf("Size of a long long int: %d bytes \n", sizeof(long long int));
printf("Size of a float: %d bytes\n", sizeof(float));
return (0);
}
