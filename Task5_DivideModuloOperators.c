/***************************************************************
Divide and Modulo Operators in c.

Created By: Tarunya Raj
Date      : 02/April/2023
****************************************************************/
#include<stdio.h>
int main(void)
{
	int iNumerator=10, iDenominator=3;
	printf("%d / %d = %d\n",iNumerator, iDenominator, iNumerator/iDenominator);
	iNumerator = -10, iDenominator = 3;
	printf("%d / %d = %d\n",iNumerator, iDenominator, iNumerator/iDenominator);
	iNumerator = -10, iDenominator = -3;
	printf("%d / %d = %d\n",iNumerator, iDenominator, iNumerator/iDenominator);
	iNumerator = 10, iDenominator = -3;
	printf("%d / %d = %d\n",iNumerator, iDenominator, iNumerator/iDenominator);

	iNumerator = 10, iDenominator = 3;
	printf("%d %% %d = %d\n", iNumerator, iDenominator, iNumerator % iDenominator);
	iNumerator = -10, iDenominator = 3;
	printf("%d %% %d = %d\n", iNumerator, iDenominator, iNumerator % iDenominator);
	iNumerator = -10, iDenominator = -3;
	printf("%d %% %d = %d\n", iNumerator, iDenominator, iNumerator % iDenominator);
	iNumerator = 10, iDenominator = -3;
	printf("%d %% %d = %d\n", iNumerator, iDenominator, iNumerator % iDenominator);

	return 0;
}

/*
* -----OUTPUT
10 / 3 = 3
-10 / 3 = -3
-10 / -3 = 3
10 / -3 = -3
10 % 3 = 1
-10 % 3 = -1
-10 % -3 = -1
10 % -3 = 1
*/