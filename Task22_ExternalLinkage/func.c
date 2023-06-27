/***************************************************************
EXTERNAL LINKAGE FUNC.C

Created By: Tarunya Raj
Date      : 19/June/2023
****************************************************************/

#include<stdio.h>
static int g_iNo=10; //CASE3 INTERNAL LINKAGE
int func()
{
	printf("\nIn func g_iNo %d",g_iNo);
	return 0;

}

