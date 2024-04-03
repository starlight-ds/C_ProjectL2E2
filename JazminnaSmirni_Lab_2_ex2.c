/*
 * JazminnaSmirni_Lab_2_ex2.c
 *
 *  Created on: Feb 7, 2024
 *      Author: jsmirni
 */
#include <stdio.h>
#include <math.h>

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	double x1, y1, z1, x2, y2, z2, result;

	printf("Enter the X1 value: ");
	scanf("%lf", &x1);
	printf("Enter the Y1 value: ");
	scanf("%lf", &y1);
	printf("Enter the Z1 value: ");
	scanf("%lf", &z1);

	printf("Enter the X2 value: ");
	scanf("%lf", &x2);
	printf("Enter the Y2 value: ");
	scanf("%lf", &y2);
	printf("Enter the Z2 value: ");
	scanf("%lf", &z2);

	result = ((x1-x2) * (x1-x2)) + ((y1-y2) * (y1-y2)) + ((z1-z2) * (z1-z2));
	result = sqrt(result);
	printf("The result is %.2f.", result);

	return 0;
}



