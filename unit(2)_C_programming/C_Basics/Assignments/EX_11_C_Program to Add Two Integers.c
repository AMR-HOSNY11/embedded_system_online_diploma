/*
 ============================================================================
 Name        : EX_11_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	printf("Enter two integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&num1,&num2);
	fflush(stdin);fflush(stdout);
	printf("sum: %d",num1+num2);
	return EXIT_SUCCESS;
}
