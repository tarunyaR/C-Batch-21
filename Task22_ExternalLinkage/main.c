/***************************************************************
EXTERNAL LINKAGE/ INTERNAL LINKAGE

Created By: Tarunya Raj
Date      : 19/June/2023
****************************************************************/
#include <stdio.h>
//void func();
int main(void)
{
	extern int g_iNo;
	extern int g_iNo;
	printf("In Main g_iNo is %d",g_iNo);
	//func();
	return 0;
}
int g_iNo=20; //CASE2

//Output

/*
CASE-1
In Main g_iNo is 20
In func g_iNo 10

*/

/*
CASE-2
/out:main.exe
/out:externalLinkage.exe
main.obj
func.obj
func.obj : error LNK2005: _g_iNo already defined in main.obj

*/

/*
CASE-3
In Main g_iNo is 20
In func g_iNo 10

*/