#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the function that corresponds to
 * given operator
 * @s: operator
 *
 * Return: corresponding function. NULL otherwise
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

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s)  == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
