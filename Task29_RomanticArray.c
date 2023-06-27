/***************************************************************
STRUCTURES - Every member has its own memory example

Created By: Tarunya Raj
Date      : 21/June/2023
****************************************************************/

#include <stdio.h>
int main(void)
{
	int arr[]={10,20,30,40,50};
	printf("%d\n",arr);   // array name is array 1st element address arr= 100-104 (sice element is int) range. op-> 100

	printf("%d\n",&arr);  // whole array address 100-120 5 elments*each element size

	printf("%d\n",arr+1); // arthemetic operations - address arr+1 = arr=arr+1; arr is address, 
						  // for addition operation if any one operand is an address then the value is incremented by the type of data stored in that address by 2nd operand number of times
						  // means here arr is address of 1st element arr+1 = address + 4(1) -> 4 size of the element in array.

	printf("%d\n",&arr+1); // same as above here the arr+1 = address + 20(1)   &arr- size of whole array .

	printf("%d\n",arr[2]+1);// regular arthemetic operation. 

	printf("%d\n",arr[2]+2); // regular arthemetic operation.

	printf("%d\n",arr[2]);  // array ke 2nd element ka name -> value

	printf("%d\n",&arr[2]+1); //address of 2nd element + 1; o/p similar to arr+1
	printf("%d\n",&arr[2]+2); //address of 2nd element + 2; similar to arr+2
	printf("%d\n",&arr[2]);   // address of 2nd element 

	printf("%d\n",++arr[2]);  // similar to &arr[2]+1
	printf("%d\n",arr[2]++);  // similar to &arr[2]+1

	//printf("%d\n",++arr);
	//printf("%d\n",arr++);
	getc(stdin);

}
/*

20445344
20445344
20445348
20445364
31
32
30
20445356
20445360
20445352
31
31


1>c:\users\91954\desktop\selfpractice\c batch 21\c-batch-21\romanticarray.c(20): error C2105: '++' needs l-value
1>c:\users\91954\desktop\selfpractice\c batch 21\c-batch-21\romanticarray.c(21): error C2105: '++' needs l-value
*/