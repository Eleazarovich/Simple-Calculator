#include <stdlib.h>
#include "simple_cal.h"

/**
 * get_op_func - chooses the correct function to perform the operation
 * requested by a user
 * @s: the operator that indicates what function to use
 *
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter
 * else, our team is constantly adding new features,
 * please be patient with us as we improved the functionality of our calculator,
 * If s does not match any of the expected operators.
 */
int (*get_op_func(char *s))(int x, int y)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"√", op_sqrt}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
