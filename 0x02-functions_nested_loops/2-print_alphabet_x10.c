#include "main.h"

/**
 * Description: print_alphabet_x10 - prints the alphabet in lowercase ten times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int l;
char a;

for (l = 0; l <= 9; l++)
{
for (a = 'a'; a <= 'z'; a++)
{
	_putchar(a);
}
	_putchar('\n');
}
}
