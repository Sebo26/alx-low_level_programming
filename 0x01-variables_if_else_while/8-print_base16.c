#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Code prints all the numbers of base 16 in lowercase.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
int hex;
int h;

for (hex = 0; hex <= 9; hex++)
{
	putchar('0' + hex);
}
for (h = 'a'; h <= 'f'; h++)
{
	putchar(h);
}
putchar('\n');

return (0);
}
