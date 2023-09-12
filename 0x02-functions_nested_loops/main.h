#ifndef MAIN-HEADER_file
#define MAIN-HEADER_file
void function_putchar()
{
	printf("_putchar\n");
}
#endif

#ifndef MAIN-HEADER_file
#define MAIN-HEADER_file
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif

#ifndef MAIN-HEADER_file
#define MAIN-HEADER_file
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
        putchar(a);
        putchar('\n');
}
}
#endif
