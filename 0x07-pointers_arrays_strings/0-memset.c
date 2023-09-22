#include "main.h"
#include <string.h>

/**
 * *_memset - The function fills memory with a constant byte.
 * @s: Memory area or address that will be filled with the constant.
 * @b: The constant byte that will be filled.
 * @n: The number of bytes that will be filled.
 * Return: s (pointer to the memory area)
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);

return (s);
}
