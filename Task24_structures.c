/***************************************************************
STRUCTURES - Every member has its own memory example

Created By: Tarunya Raj
Date      : 27/June/2023
****************************************************************/

typedef struct demo{
	int iNo1;
	int iNo2;
	int iNo3;
}DEMO;

typedef struct newDemo2{
	char chChar;
	int iNo;
	double dNo;
}DEMO2;
#include <stdio.h>
int main(void)
{
	DEMO obj;
	DEMO2 obj2;
	printf("Size of DEMO %d \t Size of DEMO2 %d",sizeof(obj),sizeof(obj2)); //Example of Word size Allignment - Padding Bytes
	printf("\niNo1= %d, iNo2=%d, iNo3=%d",obj.iNo1,obj.iNo2,obj.iNo3);
	obj.iNo1=10;
	printf("\niNo1= %d, iNo2=%d, iNo3=%d",obj.iNo1,obj.iNo2,obj.iNo3);
	obj.iNo2=20;
	printf("\niNo1= %d, iNo2=%d, iNo3=%d",obj.iNo1,obj.iNo2,obj.iNo3);
	obj.iNo3=30;
	printf("\niNo1= %d, iNo2=%d, iNo3=%d",obj.iNo1,obj.iNo2,obj.iNo3);
	
	printf("\nchChar= %c, iNo=%d, dNo=%lf",obj2.chChar,obj2.iNo,obj2.dNo);
	obj2.chChar='A';
	printf("\nchChar= %c, iNo=%d, dNo=%lf",obj2.chChar,obj2.iNo,obj2.dNo);
	obj2.iNo=20;
	printf("\nchChar= %c, iNo=%d, dNo=%lf",obj2.chChar,obj2.iNo,obj2.dNo);
	obj2.dNo=30.9876;
	printf("\nchChar= %c, iNo=%d, dNo=%lf",obj2.chChar,obj2.iNo,obj2.dNo);
	getc(stdin);
	return 0;

	getc(stdin);
}
/*
iNo1= -858993460, iNo2=-858993460, iNo3=-858993460
iNo1= 10, iNo2=-858993460, iNo3=-858993460
iNo1= 10, iNo2=20, iNo3=-858993460
iNo1= 10, iNo2=20, iNo3=30

chChar= T, iNo=10293511, dNo=0.000000
chChar= A, iNo=10293511, dNo=0.000000
chChar= A, iNo=20, dNo=0.000000
chChar= A, iNo=20, dNo=30.987600
*/
