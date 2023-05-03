/***************************************************************
Checking escape sequence in c.

Created By: Tarunya Raj
Date      : 01/April/2023
****************************************************************/

#include<stdio.h>
int main(void)
{
	printf("Prints \'  \n");
	printf("Prints \"  \n");
	printf("Prints \? \n");
	printf("Prints \? \n");
	printf("Prints \\ \n");
	printf("\\a ALERTS! \a \n");
	printf("\\b backspace!\b \n");
	printf("\\r ----carriage return ----\r\n");
	printf("cursor reached in first position after cariage retun'\\n'\n");
	printf("regular \t tab\n");
	printf("vertical \v tab \n");
}