/*
 ============================================================================
 Name        : EX_5_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :EX5: C Program to Check Whether a Character is an Alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char check;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&check);
	if( (check>='a' && check<='z') || (check>='A' && check<='Z') )
	{
		printf("%c is an alphabet",check);
	}
	else
	{
		printf("%c is not an alphabet",check);
	}
	return EXIT_SUCCESS;
}
