#include <stdio.h>
#include <ctype.h>
/**
 *  * main - Program to print alphabet letters in reverse followed by new line
 *   *
 *    * Return: return 0
 */
int main(void)
{
int c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
