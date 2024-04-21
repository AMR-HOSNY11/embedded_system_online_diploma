/*
 ============================================================================
 Name        : EX4_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :EX4:C Program to Check Whether a Number is Positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;
	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num);
	if(num==0)
	{
		printf("You entered zero");
	}
	else if(num>0)
	{
		printf("%f is postive",num);
	}
	else
	{
		printf("%f is negative",num);
	}


	return EXIT_SUCCESS;
}
