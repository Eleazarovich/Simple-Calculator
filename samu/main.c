#include <stdlib.h>
#include <stdio.h>
#include "simple_cal.h"

/**
 * main - Simple calculator operations
 * @argc: Argument counts
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int X;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	X = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", X);

	return (0);
}
