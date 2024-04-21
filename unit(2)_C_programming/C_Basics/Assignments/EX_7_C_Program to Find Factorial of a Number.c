/*
 ============================================================================
 Name        : EX_7_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :EX7: C Program to Find Factorial of a Number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	int fact=1;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num==0)
	{
		fact=1;
		printf("Factorial = %d",1);
	}
	else if(num<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else
	{
		for(int i=1;i<=num;i++)
		{
			fact*=i;
		}
		printf("Factorial = %d",fact);
	}

	return EXIT_SUCCESS;
}
