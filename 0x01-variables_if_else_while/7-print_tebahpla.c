#include <stdio.h>
#include <stdlib.h>
/**
 * main- program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Succes)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);/* ASCII code for new line*/
return (0);
}
