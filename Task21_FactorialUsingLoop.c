/***************************************************************
FACTORIAL USING LOOP

Created By: Tarunya Raj
Date      : 19/June/2023
****************************************************************/
#include <stdio.h>
int fact(int iNo)
{
	int iAns;
	int iCounter;
	for(iCounter=iNo-1,iAns=iNo;iCounter>1;iCounter--)
	{
		iAns=iAns*iCounter;
	}
	return iAns;
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