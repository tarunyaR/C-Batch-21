/***************************************************************
Bitwise Operators in C.
Used in security domain - Encryption Decreption
Memory Optimization- Embeded Programming 

Created By: Tarunya Raj
Date      : 07/May/2023
****************************************************************/

#include<stdio.h>
int main(void)
{
	printf("12&10 = %d",12&10);
	printf("\n12|10 = %d",12|10);
	printf("\n12^10 = %d",12^10);
	printf("\n~12 = %d",~12);
	printf("\n20<<1 = %d",20<<1);
	printf("\n20<<2 = %d",20<<2);
	printf("\n20>>1 = %d",20>>1);
	printf("\n20>>2 = %d",20>>2);
	printf("\n20>>3 = %d",20>>3); //data loss

	return 0;
}
/****************OUTPUT WINDOWS***************

12&10 = 8
12|10 = 14
12^10 = 6
!12 = 0
20<<1 = 40
20<<2 = 80
20>>1 = 10
20>>2 = 5
20>>3 = 2

**********************************************/