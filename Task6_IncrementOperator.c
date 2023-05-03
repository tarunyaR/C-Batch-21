/***************************************************************
Increment Operators in c.

Created By: Tarunya Raj
Date      : 02/April/2023
****************************************************************/
#include<stdio.h>
int main(void)
{
	int iNo = 10, iAns1, iAns2;
	printf("%d", iNo);

	iAns1= ++iNo;
	printf("\n%d",iAns1);
	printf("\n%d",iNo);

	iAns2=iNo++;
	printf("\n%d",iAns2);
	printf("\n%d",iNo);
	++iNo;
	printf("\n%d",iNo);
	iNo++;
	printf("\n%d", iNo);
	printf("\n%d", iNo++);
	printf("\n%d", iNo);
	printf("\n%d", ++iNo);
	printf("\n%d", iNo+1);
	printf("\n%d", iNo);
	printf("\n%d", + +iNo);
	//printf("\n%d", ++10); //error C2105: '++' needs l-value
	//printf("\n%d", 10++); //error C2105: '++' needs l-value

}