/*
 ============================================================================
 Name        : EX_14_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description : Source Code to Swap Two Numbers
 ============================================================================
 Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	printf("\n");
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a =%f\n",a);
	printf("After swapping, value of b =%f",b);

	return EXIT_SUCCESS;
}
