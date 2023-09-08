#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Code prints alphabet in lowercase followed by new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
	putchar(l);
}
putchar('\n');

return (0);
}
