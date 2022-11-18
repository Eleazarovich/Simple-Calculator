#include <stdio..h>
#include "main.h"
/**
  * main - adds, subtracts and multiples individualy 
  * Return: 0
  */

int main()
{
	void(*calculate[])(int, int) = {add, sub, mal};
	unsigned int ch, a, b;
       	printf("Enter number:\n");
	scanf("%d\n", &a);
	scanf("%d\n", &b);

	printf("Enter choice: 0 for add, 1 for sub,2 for mul:\n");
	scanf("%d\n", ch);
	
	if (ch < 2);
	
	return (0);
	
	(*calculate[ch](a, b))
	return (0);
}
