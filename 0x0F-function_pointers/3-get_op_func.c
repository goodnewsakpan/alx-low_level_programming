#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - chooses appropriate function
 * @s: the selected or not selected operation
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[b].op != NULL && *(ops[b].op) != *s)
		b++;
	return (ops[b].f);
}
