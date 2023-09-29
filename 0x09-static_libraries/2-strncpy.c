#include "main.h"
#include <string.h>

/**
 * *_strncpy - The function copies a string from src to dest.
 * @dest: The variable into which src will be copied into.
 * @src: The string that will be copied into dest.
 * @n: number of characters from src that will be copied to dest.
 * Return: dest (The string that will result after function runs)
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);

return (dest);
}
