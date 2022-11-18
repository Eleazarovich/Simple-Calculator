#include <stdio.h>
#include "main.h"

/**
 * main - program  entry point
 *
 * Return: 0 on success.
 */

int main(void)
{
	int (*helper_func[4])(int, int);
	int op, num1, num2;
	int result = 0;

	helper_func[0] = add;
	helper_func[1] = subtract;
	helper_func[2] = mul;
	helper_func[3] = divide;

	display_welcome_info();
	printf("\tOPERATOR CHOICE: ");
	scanf("%i", &op);
	printf("\tOPERAND(s): ");
	scanf("%i %i", &num1, &num2);

	result = helper_func[op](num1, num2);

	printf("\n\tThe answer is, %i\n", result);

	pause_program();

	return (0);
}
