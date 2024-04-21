/*
 ============================================================================
 Name        : EX_15_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description : to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
		printf("Enter value of a:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&a);
		printf("Enter value of b:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&b);
		printf("\n");
		a+=b-a;
		b+=a-b;
		printf("After swapping, value of a =%f\n",a);
		printf("After swapping, value of b =%f",b);


	return EXIT_SUCCESS;
}
