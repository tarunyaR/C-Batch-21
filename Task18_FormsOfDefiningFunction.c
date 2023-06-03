/***************************************************************
Forms of Function

Created By: Tarunya Raj
Date      : 3/June/2023
****************************************************************/


#include<stdio.h>

/*
* Type 1: No Parameters no return type.
*/
void Addition() 
{
	int iNo1;
	int iNo2;
	printf("Enter two numbers ");
	scanf("%d %d", &iNo1, &iNo2);
	printf("Sum of two numbers is %d\n",iNo1+iNo2);
}

/*
* Type 2: function with no parameters and has return type
*/
int Subtraction()
{
	int iNo1;
	int iNo2;
	printf("Enter two numbers \n");
	scanf("%d %d",&iNo1,&iNo2);
	return iNo1 - iNo2;
}
/*
* Type 3: function with paramters and 1 retrun type
*/
int Multiplication(int iNo1, int iNo2)
{
	return iNo1 * iNo2;
}
/*
* Type 4: function with parameters and multiple return values 
*/
int main(void)
{
	int iNo1, iNo2,iAns;
	//Type1
	Addition();

	//Type2
	iAns=Subtraction();
	printf("Subtraction is %d \n",iAns);

	//Type 3
	printf("Enter 2 numbers \n");
	scanf("%d %d",&iNo1,&iNo2);
	iAns = Multiplication(iNo1,iNo2);
	printf("Multiplication of 2 number %d",iAns);


	return 0;
}