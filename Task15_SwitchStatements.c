/***************************************************************
Flow controlled - Branching Statements
switch statemets

Created By: Tarunya Raj
Date      : 27/May/2023
****************************************************************/

#include<stdio.h>

int main(void)
{
	{
		printf("Example 1:\n");
		switch (2)
		{
		case 1: 
			printf("One\n");
		case 2:
			printf("Two\n");
		}

		printf("Example 2:\n");

		switch (3)
		{

		case 1: 
			printf("One\n");
		case 2:
			printf("Two\n");
		case 3:
			printf("Three\n");
		}

		printf("Example 3:\n");
		switch (5)
		{
		case 1: 
			printf("One\n");
		case 2:
			printf("Two\n");
		default:
			printf("Default\n");
		}

		printf("Example 4:\n");
		switch (5)
		{
		case 1: 
			printf("Case One\n");
		case 2:
			printf("Case Two\n");

		}

		printf("Example 5:\n");
		switch (5)
		{
		default: printf("Default\n");
		case 1: 
			printf("Case One\n");
		case 2:
			printf("Case 2\n");

		}

	}
	return 0;
}
/****************OUTPUT WINDOWS***************
Example 1:
Two
Example 2 :
Three
Example 3 :
Default
Example 4 :
Default
Example 5 :
	//no output

 **********************************************/