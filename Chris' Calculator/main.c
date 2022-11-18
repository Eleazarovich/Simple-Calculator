#include <stdio.h>
#include "main.h"

/**
 * main - program  entry point
 *
 * Return: 0 on success.
 */

int main(void)
{
	int (*helper_func[4])(int, int) = NULL;
	int op, num1, num2;
	int result = 0;

	helper_func[0] = add;
	helper_func[1] = subtract;
	helper_func[2] = mul;
	helper_func[3] = divide;

	printf("WELCOME TO CHRIS' SIMPLE CALCULATOR.\n");
	printf("\tINSTRCTIONS\n");
	printf("\tFirst enter an operator choice (and press Enter key).\n");
	printf("\tThen enter operands next (on same line separated by a space).\n");
	printf("\t\tOPERATOR CHOICE\n");
	printf("\t\tEnter 0 for + (addition)\n");
	printf("\t\tEnter 1 for - (subtraction)\n");
	printf("\t\tEnter 2 for * (multiplication)\n");
	printf("\t\tEnter 3 for / (divition)\n");
	printf("\tOPERATOR CHOICE: ");
	scanf("%i", &op);
	printf("\tOPERAND(s): ");
	scanf("%i %i", &num1, &num2);

	result = helper_func[op](num1, num2);

	printf("\n\tThe answer is, %i", result);

	return (0);
