/*
 ============================================================================
 Name        : EX_1.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :EX1: Write C Program to Check Whether a Number is Even or Odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("%d is Even",x);
	}
	else
	{
		printf("%d is Odd",x);
	}

	return EXIT_SUCCESS;
}
