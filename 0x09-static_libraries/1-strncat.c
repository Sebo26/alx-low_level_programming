#include "main.h"
#include <string.h>

/**
 * *_strncat - The function concatenates src to dest but only use 'n' bytes of
 * src. src is not null-terminated (\0).
 * @dest: The string to which src will be added.
 * @src: The string that will have n bytes of it added to dest.
 * @n: number of bytes of src that will be added to dest.
 * Return: dest (pointer to the resulting string)
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
