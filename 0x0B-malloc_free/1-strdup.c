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
char *string;
int n;
int length;

if (str == NULL)
{
	return (NULL);
}

length = strlen(str);
string = malloc((length + 1) * sizeof(char));

if (string == NULL)
{
	return (NULL);
}
for (n = 0; n < length; n++)
{
	string[n] = str[n];
}
string[length] = '\0';
return (string);
}
