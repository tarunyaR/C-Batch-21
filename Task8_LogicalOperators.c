/***************************************************************
Logical Operators in C.

Created By: Tarunya Raj
Date      : 07/May/2023
****************************************************************/

#include<stdio.h>
int main(void)
{
	int iNo1=0;
	int iNo2=1;
	int iNo3=2;
	int iAns;

	//CASE1:

	//same operator no precedence, associativity - L->R binding.
	iAns= iNo1 && ++iNo2 && iNo3++;
		// (iNo1 && ++iNo) && iNo3++;
	// both operand should be true then o/p of Logical AND is true else false.
	// First operand is 0/ false the decision is made and rest of the logic is not executed. increment dosn't take place
	printf("CASE1: iNo1= %d \t iNo2= %d \t iNo3= %d \t iAns= %d \n",iNo1,iNo2,iNo3,iAns);

	//CASE2:
	//logical AND ( Level 2)more precedence order than logical OR (level2 )
	iAns= iNo1 && ++iNo2 || iNo3++;
		//(iNo1 && ++iNo2) || iNo3++;
	// First operand is 0/ false the decision is made and iNo2 increment dosn't take place. 
	// logical OR's first operand is 0 , check 2nd operand value- hence increment executes 
	printf("CASE2: iNo1= %d \t iNo2= %d \t iNo3= %d \t iAns= %d \n",iNo1,iNo2,iNo3,iAns);
	
	//CASE3:
	//logical AND ( Level 2)more precedence order than logical OR (level2 )
	iAns= iNo1 || ++iNo2 && iNo3++;
		//iNo1 || (++iNo2 && iNo3++;) 
	// logical OR's first operand is 0 , check 2nd operand value
	// 2nd operand - iNo2 increments , Logical AND 1st operand is non zero value 2nd operand is executed.
	printf("CASE3: iNo1= %d \t iNo2= %d \t iNo3= %d \t iAns= %d \n",iNo1,iNo2,iNo3,iAns);
	return 0;
}
/****************OUTPUT WINDOWS***************

CASE1: iNo1= 0   iNo2= 1         iNo3= 2         iAns= 0
CASE2: iNo1= 0   iNo2= 1         iNo3= 3         iAns= 1
CASE3: iNo1= 0   iNo2= 2         iNo3= 4         iAns= 1

**********************************************/