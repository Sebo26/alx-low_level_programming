#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Description: This function prints the alphabet in lowercase followed by
 * a new line.
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
	_putchar(a);
	_putchar('\n');
}
}
