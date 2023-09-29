#include "main.h"
#include <string.h>

/**
 * *_strcat - The function adds the "src" string to the "dest " string,
 * overwrite terminating null byte (\0) and adding it at the end.
 * @dest: The string where src will be added.
 * @src: The string that will be added to dest.
 * Return: *dest (pointer to the resulting string)
 */
char *_strcat(char *dest, char *src)
{
strcat(dest, src);

return (dest);
}
