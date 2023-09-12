#include "main.h"
#include <stdio.h>

/**
 * function prints the alphabet in lowercase followed by new line.
 *
 * Description: function prints the alphabet in lower case.
 *
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
	putchar('\n');
}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
