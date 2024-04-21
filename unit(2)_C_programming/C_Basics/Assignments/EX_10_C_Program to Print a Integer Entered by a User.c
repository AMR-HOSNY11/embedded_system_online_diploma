/*
 ============================================================================
 Name        : EX_10_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :C Program to Print a Integer Entered by a User
 ===========================================================================

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	printf("Enter an integer:");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);
		printf("You entered: %d",n);
	return EXIT_SUCCESS;
}
