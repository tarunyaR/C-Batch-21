/***************************************************************
Relational Operators in C.

Created By: Tarunya Raj
Date      : 07/May/2023
****************************************************************/

#include<stdio.h>
int main(void)
{
	// NOTE: These operators gives their result in bolean form.
	printf("20 < 10  returns %d",20<10);
	printf("\n20 <= 10 returns %d",20<=10);
	printf("\n20 > 10  returns %d",20>10);
	printf("\n20 >= 10 returns %d",20>=10);
	printf("\n20 == 10 returns %d",20==10);
	printf("\n20 != 10 returns %d",20<10);
	printf("\n10 != 10 returns %d",10 != 10);
	return 0;
}
/****************OUTPUT WINDOWS***************

20 < 10  returns 0
20 <= 10 returns 0
20 > 10  returns 1
20 >= 10 returns 1
20 == 10 returns 0
20 != 10 returns 0
10 != 10 returns 0

**********************************************/