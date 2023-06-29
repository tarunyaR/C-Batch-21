/***************************************************************
POINTERS 

Created By: Tarunya Raj
Date      : 29/June/2023
****************************************************************/
//POINTER POINTING TO STRUCT
typedef struct demo{
	int iNo;
	float fNo;
} DEMO;


#include <stdio.h>
int main(void)
{
	{
		int iNo=10;
		int *pPtr=&iNo;
		printf("\n%d",iNo);
		printf("\n%d",&iNo);
		printf("\n%d",pPtr);
		printf("\n%d",*pPtr);
		*pPtr=20;
		//After Assignment
		printf("\n%d",iNo);
		printf("\n%d",&iNo);
		printf("\n%d",pPtr);
		printf("\n%d",*pPtr);
	}
//POINTER POINTING TO STRUCT
	{
		DEMO obj;
		DEMO *pPtrStruct=&obj;
		(*pPtrStruct).iNo=10;
		printf("\n%d",(*pPtrStruct).iNo);
		printf("\n%d",pPtrStruct->iNo);
	
		pPtrStruct->fNo=10.56;
		printf("\n%lf",(*pPtrStruct).fNo);
		printf("\n%lf",pPtrStruct->fNo);
	}
//POINTER POINTING TO POINTER
	{
		//int arr[]= {10,20,30,40,50};
		int no=10;
		int *p=&no;
		int **q=&p;
		int ***r= &q;
		int ****s=&r;
		int *****x=&s;
		int ******y=&x;
		int *******z=&y;

		printf("\n%d", **q);
		printf("\n%d", ***s);
		printf("\n%d", ****z);
		//printf("\n%d", ****r); //Compiler error * must be a pointer
		printf("\n%d", **x);
		printf("\n%d", &(**x));
		printf("\n%d", &(***r));
		printf("\n%d", *p);
		printf("\n%d", &(*p));
		printf("\n%d", *(&(*p)));
		printf("\n%d", &no);
		printf("\n%d", *(&no));
	}

	getc(stdin);


}

/*

10
5241140
5241140
10
20
5241140
5241140
20

//POINTER POINTING TO STRUCT
10
10
10.560000
10.560000


//POINTER POINTING TO POINTER
8387888
8387900
8387900
8387896
8387888
10
8387888
10
8387888
10
*/
