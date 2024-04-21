/*
 ============================================================================
 Name        : EX_3_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Find the Largest Number Among Three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3,max;
	printf("enter three numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);
	max=num1;
	if(num2>max)
	{
		max=num2;
		if(num3>max)
		{
			max=num3;
		}
	}
	else if(num3>max)
	{
		max=num3;
	}
	printf("%f",max);
	return EXIT_SUCCESS;
}
