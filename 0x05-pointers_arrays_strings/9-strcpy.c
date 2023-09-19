#include "main.h"
#include <string.h>

/**
 * *_strcpy - The function copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: Where the src string will be copied to.
 * @src: The source of the string
 */
char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);
return (dest);
}
