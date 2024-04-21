/*
 ============================================================================
 Name        : EX_8_C_Program.c
 Author      : AMR HOSNY
 Version     :
 Copyright   : Your copyright notice
 Description :EX8:CProgram to Make a Simple Calculator to Add,Subtract,Multiply or Divide
 ============================================================================
 Enter   operator   either   +   or   -   or   *   or   divide   :   -
 Enter two operands: 3.4
8.4
3.4   - 8.4 = -5.0
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char choice;
	float num1,num2;
	calculator:printf("Enter operator either  +  or  -  or  *  or  /  :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&choice);
	printf("Enter two operands:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(choice)
	{
	case '+':
	{
		printf("%f+%f=%f",num1,num2,num1+num2);
	}
	break;
	case '-':
	{
		printf("%f-%f=%f",num1,num2,num1-num2);
	}
	break;
	case '*':
	{
		printf("%f*%f=%f",num1,num2,num1*num2);
	}
	break;
	case '/':
	{
		printf("%f/%f=%f",num1,num2,num1/num2);
	}
	break;
	default:
	{
		goto calculator;
	}
	}

	return EXIT_SUCCESS;
}
