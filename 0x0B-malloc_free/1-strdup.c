#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *_strdup - The function returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: The string that will be copied.
 * Return: NULL (if insufficient memory was available OR if str = NULL)
 * and string (a pointer to a new string)
 */
char *_strdup(char *str)
{
char string = malloc
