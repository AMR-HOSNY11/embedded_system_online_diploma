/*
 ============================================================================
 Name        : EX_12_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2;
	printf("enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&num1,&num2);
	fflush(stdin);fflush(stdout);
	printf("product:%f",num1*num2);
	return EXIT_SUCCESS;
}
