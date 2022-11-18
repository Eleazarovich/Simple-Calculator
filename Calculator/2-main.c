#include <stdio.h>
#include "main.h"
#include <math.h>

/**
  * main - calculate special angles
  * Return:
  */

int main()
{
	float degree, radian;
	float i = PI; 

	printf("Enter angle in degrees\n");
	scanf("%f", &degree);
	radian = degree * (PI / 180.0);

	if (degree != 30 || degree != 45 || degree != 60)
	{
		ptintf("Our team is constantly adding new features please be 
				paitent with us we improve functionality of our calculator");
	}
	else
	{
		printf("sin(%f) = %f\n", degree, sin(radian));
		printf("cos(%f) = %f\n", degree, cos(radian));
		printf("tan(%f) = %f\n", degree, tan(radian));

	}
	return (0);
}
