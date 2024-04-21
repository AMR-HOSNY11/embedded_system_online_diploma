/*
 ============================================================================
 Name        : c.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description : c program to check vowel or consonat
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char check;
	printf("enter the alphabet:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&check);
	switch(check)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	{
		printf("%c is vowel",check);
	}
	break;
	default:
	{
		printf("%c is consonat",check);
	}
	}
	return EXIT_SUCCESS;
}
