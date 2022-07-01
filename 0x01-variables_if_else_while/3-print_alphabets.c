#include <stdlib.h>
#include <stdio.h>
/**
 * main- write alphabet in lowercases and then uppercass.
 * Return: always 0 (success)
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);

}
putchar(10);/* ASCII for new line*/
return (0);
}
