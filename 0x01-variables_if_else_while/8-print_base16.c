#include <stdio.h>
#include <stdlib.h>
/**
 * main-program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int hexd;
char ch;
for (hexd = 48; hexd <= 57; hexd++)
{
putchar(hexd);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);/*ASCII code for new line*/
return (0);
}
