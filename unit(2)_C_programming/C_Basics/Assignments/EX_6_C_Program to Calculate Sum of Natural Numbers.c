/*
 ============================================================================
 Name        : EX_6_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :EX6: C Program to Calculate Sum of Natural Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int sum=0;
	int i;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=+i;
	}
	printf("sum = %d",sum);
	return EXIT_SUCCESS;
}
