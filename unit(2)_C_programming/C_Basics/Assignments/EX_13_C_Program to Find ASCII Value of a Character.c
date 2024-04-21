/*
 ============================================================================
 Name        : EX_13_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character;
	printf("enter a character:");
		fflush(stdin);fflush(stdout);
		scanf("%c",&character);
		printf("ASCII value of %c =%d",character,character);
	return EXIT_SUCCESS;
}
