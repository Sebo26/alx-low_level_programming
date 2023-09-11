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

for (hex = 0; hex <= 16; hex++)
{
	putchar("%x",hex);
}
putchar('\n');

return (0);
}
