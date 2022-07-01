#include <stdlib.h>
#include <stdio.h>
/**
 * main- program that prints the alphabet in lowercase
 * excerpt q and e
 * Return: Always 0 (succes)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar (ch);
}
putchar (10);
return (0);
}

