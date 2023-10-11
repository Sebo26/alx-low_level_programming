#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - The function gets mathematical operation functions.
 * @s: The operation sign that will be picked.
 */
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

