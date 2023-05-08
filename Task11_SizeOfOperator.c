/***************************************************************
sizeof Operator in C.

Created By: Tarunya Raj
Date      : 07/May/2023
****************************************************************/

#include<stdio.h>
int main(void)
{
	int iNo = 10;
	char chChar = 'A';
	float fNo = 57.33f;
	double dNo = 69.33f;
	double dNo1 = 69.33;
	printf("sizzeof(int) %d", sizeof(int));
	printf("\nsizeof(char) %d", sizeof(char));
	printf("\nsizeof(float) %d", sizeof(float));
	printf("\nsizeof(double) %d", sizeof(double));
	/*
	printf("\n\nsizzeof int %d", sizeof int); //error C2059: syntax error : 'type' Correct syntax --> sizeof(int)
	printf("\nsizeof char %d", sizeof char); //error C2059: syntax error : 'type'
	printf("\nsizeof float %d", sizeof float); //error C2059: syntax error : 'type'
	printf("\nsizeof double %d", sizeof double); //error C2059: syntax error : 'type'
	
	*/

	printf("\n\nsizeof(iNo) %d", sizeof(iNo));
	printf("\nsizeof(chChar) %d", sizeof(chChar));
	printf("\nsizeof(fNo) %d", sizeof(fNo));
	printf("\nsizeof(dNo) %d", sizeof(dNo));
	printf("\nsizeof(dNo1) %d", sizeof(dNo1));


	printf("\n\n sizeof 100 %d",sizeof 100);
	printf("\n sizeof 'z' %d",sizeof 'z');
	printf("\n sizeof 99.99 %d",sizeof 99.99);
	printf("\n sizeof 99.99f %d",sizeof 99.99f);

	printf("\n\n sizeof ++iNo %d", sizeof ++iNo);
	printf("\n  iNo = %d",  iNo);

	return 0;
}
/****************OUTPUT WINDOWS***************

sizzeof(int) 4
sizeof(char) 1
sizeof(float) 4
sizeof(double) 8

sizeof(iNo) 4
sizeof(chChar) 1
sizeof(fNo) 4
sizeof(dNo) 8
sizeof(dNo1) 8

 sizeof 100 4
 sizeof 'z' 4
 sizeof 99.99 8
 sizeof 99.99f 4

 sizeof ++iNo4
  iNo = 10

**********************************************/