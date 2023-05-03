/***************************************************************
Checking format specifiers in c.

Created By: Tarunya Raj
Date      : 01/April/2023
****************************************************************/

#include<stdio.h>

int main(void)
{
	char ch = 'c';
	signed int iSigned = -34;
	unsigned int iUnsigned = 67;
	float fVar = 4.90080000006767;
	int ino1, ino2, ino3,iOct,iHex,iDec;

	printf("\nCharcter %c ", ch);
	printf("\nsigned int %i ", iSigned);
	printf("\nPrinting signed int using %%d   %d ", iUnsigned);
	printf("\nPrinting signed int using %%o %o ", iUnsigned);
	printf("\nPrinting signed int using %%x %x ", iUnsigned);
	printf("\nPrinting signed int using %%X %X ", iUnsigned);
	printf("\n----------------------------------------------------");
	
	/*--------------------------------------------------------
	int ino1, ino2, ino3;  //syntax error : missing ';' before 'type'
	//NOTE:  When compiling a C program, MSVC doesn't allow declarations to follow statements in a
	block (it uses old C90 rules - support for declarations mixed with statements was added to C in the 1999 standard).
	------------------------------------------------------------*/
	
	printf("Enter interger value in decimal format: ");
	scanf("%d",&ino1);

	printf("\nEnter interger value in ocatal format: ");
	scanf("%i",&ino2);

	printf("\nEnter integer value in hexadecimal format: ");
	scanf("%i",&ino3);

	printf("\nEnter integer value in Decimal fomat ");
	scanf("%i",&iDec);

	printf("\nEnter integer valuein octal format: ");
	scanf("%o",&iOct);

	printf("\nEnter integer value in hexadecimal format: ");
	scanf("%x",&iHex);

	printf("ino1 = %i \tino2 = %i \tino3 = %i\n", ino1, ino2, ino3);
	printf("ino1 = %d \tino2 = %d \tino3 = %d\n", ino1, ino2, ino3);
	printf("ino1 = %d \tino2 = %O \tino3 = %X \tino3 = %x\n", ino1, ino2, ino3,ino3);
	printf("ino1 = %d \tino2 = %d \tino3 = %d \tino3 = %d\n", ino1, iDec, iOct,iHex);
	// NOTE: %d and %i behavior is different in scanf
	//       % d assume base 10 while % i auto detects the base
	// 

	// trying to print negative value using %u
	printf("Printing -10 using %%u: %u\n", -10);

	printf("Unsigned Integer using %%u: %u\n", iUnsigned);
	//Printing Float variables
	printf("\nUsing %%f: %f", fVar);
	printf("\nUsing %%e: %e", fVar);
	printf("\nUsing %%E, %E", fVar);

	printf("The Memory Address of fVar: %p\n", (float*)&fVar);

	return 0;
}