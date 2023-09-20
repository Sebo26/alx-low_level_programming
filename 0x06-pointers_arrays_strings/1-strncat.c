#include "main.h"
#include <string.h>

/**
 * *_strncat - The function concatenates src to dest but only use 'n' bytes of
 * src. src is not null-terminated (\0).
 * @dest: The string to which src will be added.
 * @src: The string that will have n bytes of it added to dest.
 * @n: number of bytes of src that will be added to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int src_length;
src_length = strlen(src);

for (i = 0 ; i < n && src[n] != '\0' ; n++)
{
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
}
	return (dest);
}
