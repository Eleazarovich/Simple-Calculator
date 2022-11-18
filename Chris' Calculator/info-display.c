#include <stdio.h>
#include "main.h"

/**
 * display_welcome_info - displays the startup information about the calculator
 */

void display_welcome_info(void)
{
	printf("WELCOME TO CHRIS' SIMPLE CALCULATOR.");
	pause_program();
	printf("\n\tINSTRUCTIONS");
	pause_program();
	printf("\tFirst enter an operator choice (and press Enter key).\n");
	printf("\tThen enter operands next (on same line separated by a space).");
	pause_program();
	printf("\n\t\tOPERATOR CHOICE\n");
	printf("\t\tEnter 0 for + (addition)\n");
	printf("\t\tEnter 1 for - (subtraction)\n");
	printf("\t\tEnter 2 for * (multiplication)\n");
	printf("\t\tEnter 3 for / (divition)\n");
	pause_program();
}
