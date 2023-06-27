/***************************************************************
UNION - Union is assigned memory of its largest size shares memory

Created By: Tarunya Raj
Date      : 27/June/2023
****************************************************************/
#include <stdio.h>
typedef union demo{
	int iNo1;
	int iNo2;
	int iNo3;
}DEMO;

typedef union newDemo2{
	char chChar;
	int iNo;
	double dNo;
}DEMO2;
int main(void)
{
	DEMO obj;
	DEMO2 obj2;
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
iNo1= 1898530580, iNo2=1898530580, iNo3=1898530580
iNo1= 10, iNo2=10, iNo3=10
iNo1= 20, iNo2=20, iNo3=20
iNo1= 30, iNo2=30, iNo3=30

chChar= x, iNo=15872888, dNo=0.000000
chChar= A, iNo=15872833, dNo=0.000000
chChar= , iNo=20, dNo=0.000000
chChar= ö, iNo=1518700436, dNo=30.987600

*/
