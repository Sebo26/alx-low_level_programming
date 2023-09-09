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
char hex;
char h;

for (hex = 0; hex <= 9; hex++)
{
for (h = 'a'; h <= 'f'; h++)
{
	putchar(h);
}
	putchar(hex);
}

return (0);
}
