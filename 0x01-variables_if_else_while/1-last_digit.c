#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Assign a random number to the variable n each time it is executed
 * Main-print the last digit of the number stored in the variable n
 * Return:Always 0 (success)
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
lastDigit = n % 10;
if (lastDigit > 5)
{
printf("%d%s", lastDigit, " and is greater than 5");
}
{
if (lastDigit == 0)
printf("%d%s", lastDigit, " and is 0");
}
{
if (lastDigit < 6 && lastDigit != 0)
{
printf("%d%s", lastDigit, " and is less than 6 and not 0");
}
printf("\n");
}
return (0);
}
