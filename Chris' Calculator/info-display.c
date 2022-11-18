#include <stdio.h>

/**
 * display_welcome_info - displays the startup information about the calculator
 */

void display_welcome_info(void)
{
	char c;
	printf("WELCOME TO CHRIS' SIMPLE CALCULATOR.");
	c = getchar();
	printf("\n\tINSTRUCTIONS");
	c = getchar();
	printf("\tFirst enter an operator choice (and press Enter key).\n");
	printf("\tThen enter operands next (on same line separated by a space).");
	c = getchar();
	printf("\n\t\tOPERATOR CHOICE\n");
	printf("\t\tEnter 0 for + (addition)\n");
	printf("\t\tEnter 1 for - (subtraction)\n");
	printf("\t\tEnter 2 for * (multiplication)\n");
	printf("\t\tEnter 3 for / (divition)\n");
	c = getchar();
}
