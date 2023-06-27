/***************************************************************
NO LINKAGE EXAMPLES
ALL LOCAL VARIABLES HAVE NO LINKAGE

Created By: Tarunya Raj
Date      : 27/June/2023
****************************************************************/

#include <stdio.h>
#include <conio.h>
int no=10; // CASE3
int main(void)
{
	/*
	CASE 1: dEFINATION OF VARIABLE HAVING SAME DATA TYPE IN SAME SCOPE
	int iNo= 10;
	int iNo =57;
	*/

	/*
	CASE 2: DEFINATION OF VARIABLE HAVING DIFFERENT DATA TYPE IN SAME SCOPE
	
	int iNo= 10;
	float iNo =57.6f;
	*/

	/*
	CASE 3: DEFINATION OF VARIABLE HAVING SAME/ DIFFERENT DATA TYPE IN DIFFERENT SCOPE
	*/
	int no=20;
	{
		int no=40; // more priority is give to this initialization 
		printf("%d\n",no);
	}
	getch();
}

/*
CASE1, CASE2:
error C2374: 'iNo' : redefinition; multiple initialization
*/