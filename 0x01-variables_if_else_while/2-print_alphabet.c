#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- program that prints the alphabet in lowercase
*Return: Always return 0 (succes)
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar("10");/* ASCII code*/
return (0);
}
