/***************************************************************
Recursion

Created By: Tarunya Raj
Date      : 19/June/2023
****************************************************************/
#include <stdio.h>
int fact(int iNo)
{
	if(iNo==1)
	  return 1;
	return iNo*fact(iNo-1);
}
int main(void)
{
	int iNo;
	int iAns;
	printf("Enter number:");
	scanf("%d",&iNo);
	iAns= fact(iNo);
	printf("iAns=%d",iAns);
}