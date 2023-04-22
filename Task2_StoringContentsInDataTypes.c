/***************************************************************
Storing Different integer char contents in both the data type 
Check how the values gets stored irrespective of user input.

Created By: Tarunya Raj
Date      : 22/March/2023
****************************************************************/
#include<stdio.h>

int main()
{
	int no1;
	char ch;
	printf("Enter an integer data : ");
	scanf("%d",&no1);
	printf("How Decimal gets stored in different format specifiers Decimal: %d \t Char:  %c \t Hex: %X  \t Ocatal:%o \n",no1, no1, no1,no1);
	
	printf("Enter an integer data : ");
	scanf("%c",&no1);
	printf("How Integer in %%c FS. gets stored in different format specifiers Decimal: %d \t Char:  %c \t Hex: %X  \t Ocatal:%o \n",no1, no1, no1,no1);
	
	printf("Enter an charater data : ");
	scanf("%c",&ch);
	printf("Value entered using different format specifiers %%d :  %d %%c :  %c \n",ch, ch);
	
	printf("Enter an charater data : \n");
	scanf("%d",&ch);
	printf("Value entered using different format specifiers %%d :  %d %%c :  %c \n",ch, ch);

	getc(stdin);
	return 0;
}