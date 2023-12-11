#include "main.h"
#include <string.h>

/**
 * *_memcpy - The function copies memory address.
 * @dest: Memory copied from src will be stored here.
 * @src: The place that stores the memory that will be copied to the dest.
 * @n: Number of bytes that will be copied from src.
 * Return: dest (a pointer to dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);

return (dest);
}
