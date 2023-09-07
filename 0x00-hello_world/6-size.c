#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int l;
long long int k;
float f;
printf("Size of a %s: %d byte(s)", (unsigned long)sizeof(c));
printf("Size of a %s: %d byte(s)", (unsigned long)sizeof(i));
printf("Size of a %s: %d byte(s)", (unsigned long)sizeof(l));
printf("Size of a %s: %d byte(s)", (unsigned long)sizeof(k));
printf("Size of a %s: %d byte(s)", (unsigned long)sizeof(f));
return (0);
}
