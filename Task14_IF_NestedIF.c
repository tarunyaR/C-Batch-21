/***************************************************************
Flow controlled - Branching Statements
if and if-else statemets

Created By: Tarunya Raj
Date      : 27/May/2023
****************************************************************/

#include <stdio.h>

int main(void)
{
	{
		printf("If examples:\n");
	}

	{
		int iNo = 5;
		printf("First eg:\n");
		if (iNo < 10)
			printf("One\t");
			printf("Two\n");
	}
	{

		int iNo = 5;
		printf("Second eg:\n");
		if (iNo > 10)
			printf("One\t");
			printf("Two\n");
	}

	{
		int iNo = 5;
		printf("Third eg:\n");
		if (iNo > 2)
		{
			printf("One\t");
			printf("Two\n");
		}
	}

	printf("\n IF-else examples\n"); 
	{
			int iNo = 5;
			printf("\nFirst eg:\n");
			if(iNo<10)
				printf("One\t");
			else
				printf("Two");
	}

	{
			int iNo = 15;
			printf("\nSecond eg:\n");
			if(iNo<10)
				printf("One\t");
			else
				printf("Two\n");
	}

	//{
	//		int iNo = 5;
	//		printf("3rd eg:");
	//		if(iNo<10)
	//			printf("One\t");
	//			printf("two\t");
	//		else					//error C2181 : illegal else without matching if
	//			printf("three");
	//}

	{
			int iNo = 15;
			printf("Fourth eg:\n");
			if (iNo < 10)
			{
				printf("One\t");
				printf("two\t");

			}
			else
			{
				printf("three\t");
				printf("four");

			}
	}
	/* {
			int iNo = 15;
			printf("5th eg:");
			if (iNo < 10); //error C2181 : illegal else without matching if
			{
				printf("One\t");
				printf("two\t");

			}
			else
			{
				printf("three");
				printf("four");

			}
	}*/



	return 0;
}

/****************OUTPUT WINDOWS***************
If examples:
First eg:
One     Two
Second eg:
Two
Third eg:
One     Two

 IF-else examples

First eg:
One
Second eg:
Two
Fourth eg:
three   four
 **********************************************/