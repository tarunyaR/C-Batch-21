/***************************************************************
Menu Driven Program
Requirement: 
1. 5 choices for user 1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Modulus. 
2. Get the input from user on which numbers the desired calculation has to be performed.
3. Don't show this option if invalid choice is entered.
4. Keep asking for choices until user wants to exit the process.
5. using switch statemets

Created By: Tarunya Raj
Date      : 3/June/2023
****************************************************************/

#include<stdio.h>
int Addition(int iNo1, int iNo2)
{
	return iNo1 + iNo2;
}

int Multiplication(int iNo1, int iNo2) 
{
	return iNo1 * iNo2;
}
int Division(int iNo1,int  iNo2) 
{
	return iNo1 / iNo2;
}

int Subtraction(int iNo1, int iNo2)
{
	return iNo1 - iNo2;
}
int Modulus(int iNo1, int iNo2)
{
	return iNo1 % iNo2;
}
int main (void)
{
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;
	char chExit=1; 
	do
	{
		printf("\n____________________________________\n\nPlease Enter your choice");
		printf("\n\nChoice:\n1. Addtion\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6.Exit\n");
		if (scanf("%d", &iChoice) != 1) 
		{
			printf("Enter an integer value");
			break;
		}
		if (iChoice <= 0 || iChoice > 6 )
		{
			printf("Please Enter Valid Choice!\n");
			continue;
		}
		else if (iChoice < 6 && iChoice>0)
		{
			printf("Enter two numbers");
			scanf("%d %d",&iNo1,&iNo2);
		} 
		switch (iChoice)
		{
		case 1: {
			iAns = Addition(iNo1, iNo2);
			printf("%d + %d = %d", iNo1, iNo2, iAns);
		}
			  break;
		case 2: {
			iAns = Subtraction(iNo1, iNo2);
			printf("%d - %d = %d", iNo1, iNo2, iAns);
		}
			  break;
		case 3: {
				iAns = Multiplication(iNo1, iNo2);
				printf("%d * %d = %d", iNo1, iNo2, iAns);
		}
			break;
		case 4: {
			iAns = Division(iNo1, iNo2);
			printf("%d / %d = %d", iNo1, iNo2, iAns);

		}
			break;
		case 5: {
			iAns = Modulus(iNo1, iNo2);
			printf("%d %% %d = %d", iNo1, iNo2, iAns);
		}
			break;
		case 6:
			chExit = 0;
		}

	} while (chExit==1);

	return 0;
}