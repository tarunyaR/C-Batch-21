/***************************************************************
Comma Operator in C.

Created By: Tarunya Raj
Date      : 18/May/2023
****************************************************************/

#include<stdio.h>
int main(void)
{
	int iAns1, iAns2;
	iAns1 = 10, 20, 30;
	iAns2 = (10, 20, 30);
	printf("%d %d",iAns1,iAns2);
	return 1, -1, 0;
	
}
/****************OUTPUT WINDOWS***************

10 30

**********************************************/