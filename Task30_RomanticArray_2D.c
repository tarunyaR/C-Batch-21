/***************************************************************
2D ARRAY - 

Created By: Tarunya Raj
Date      : 29/June/2023
****************************************************************/

#include <stdio.h>
int main(void)
{
	int arr[][5]= {{1,2},{3,4}};
	printf("\n%d (1D ka address)",arr);		// address of 1st element in 2d arrary is 1D array address of 1D array is address of 1st element inside 1D array- int address range ? doubt
	printf("\n%d (whole array ka address )",&arr);	// address of whole arrary
	printf("\n%d (array base addres+ 1*(sizeof(data type of 1st array element)))",arr+1);	// arithemetic operation using address
	printf("\n%d (array 2nd element ka naam - 1D ka naam - 1D 1st element ka address)",arr[2]);  //array ke 2nd element ka naam - 1D array - 1D array ka naam -> 1st element ka address
	printf("\n%d (array 2nd element ka naam - 1D ka naam - 1D 1st element ka address +1(sizeof(int)))",arr[2]+1); 
	printf("\n%d (array 2nd element ka naam - 1D ka naam - 1D 1st element ka address +2(sizeof(int))",arr[2]+2);
	printf("\n%d (array ke 2nd element ka address whole 1D ka address)",&arr[2]);
	printf("\n%d (array ke 2nd element ka address whole 1D ka address +1(sizeof(2nd element)))",&arr[2]+1);
	printf("\n%d (array ke 2nds element ka address whole 1D ka address+2(sizeof(2nd element)))",&arr[2]+2);
	printf("\n%d (arary ke 0th element ka adress)",&arr[0]);
	printf("\n%d (2D madhle 1D array ka address+ 1(sizeof(2D madhe 1st element- 1D)))",arr+2);
	//printf("\n%d",arr++);
	//printf("\n%d",++arr);

	getc(stdin);

}
/*

15727528 (1D ka address) 
15727528 (whole array ka address )
15727548 (array base addres+ 1*(sizeof(data type of 1st array element)))
15727568 (array 2nd element ka naam - 1D ka naam - 1D 1st element ka address)
15727572 (array 2nd element ka naam - 1D ka naam - 1D 1st element ka address +1(sizeof(int)))
15727576 (array 2nd element ka naam - 1D ka naam - 1D 1st element ka address +2(sizeof(int))
15727568 (array ke 2nd element ka address whole 1D ka address)
15727588 (array ke 2nd element ka address whole 1D ka address +1(sizeof(2nd element)))
15727608 (array ke 2nds element ka address whole 1D ka address+2(sizeof(2nd element)))
15727528 (arary ke 0th element ka adress)
15727568 (2D madhle 1D array ka address+ 1(sizeof(2D madhe 1st element- 1D)))

1>c:\users\91954\desktop\selfpractice\c batch 21\c-batch-21\romanticarray.c(20): error C2105: '++' needs l-value
1>c:\users\91954\desktop\selfpractice\c batch 21\c-batch-21\romanticarray.c(21): error C2105: '++' needs l-value
*/