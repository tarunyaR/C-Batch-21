/***************************************************************
Check Sizeof all Data types and how data modifiers effect them.

Created By: Tarunya Raj
Date      : 22/March/2023
****************************************************************/

#include <stdio.h>
#include <conio.h>  // fatal error: conio.h: No such file or directory	<< gcc g++ compilers in linux 
//conio.h is a header file used in old MS-DOS compilers it is not part of the C programming language, the C standard library, ISO C or by POSIX

int main()
{
	printf("Size of integer data Type: %d \n",sizeof(int));
	printf("Size of long int : %d \n",sizeof(long int));
	//printf("Size of long long int : %d \n",sizeof(long long int));
		// gcc -- warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ use %ld format specifier.

	printf("Size of short int : %d \n",sizeof(short int));

	printf("Size of Float data Type: %d \n",sizeof(float));
	printf("Size of long float : %d \n",sizeof(long float)); //warning C4215: nonstandard extension used : long float // error in Linux
	//printf("Size of long long float : %d \n",sizeof(long long float)); // error C2632: '__int64' followed by 'float' is illegal
	//printf("Size of short float : %d \n",sizeof(short float)); //error C2632: 'short' followed by 'float' is illegal	<< Type float is the smallest floating type. non

	printf("Size of char data Type: %d \n",sizeof(char)); 
	//printf("Size of long char : %d \n",sizeof(long char));  //error C2632: 'long' followed by 'char' is illegal
	//printf("Size of short char : %d \n",sizeof(short char)); //error C2632: 'short' followed by 'char' is illegal		<< Minimum size reserved in 1 byte. 
	//printf("Size of long long char : %d \n",sizeof(long long char)); //error C2632: '__int64' followed by 'char' is illegal
		//gcc --  error: both ‘short’ and ‘char’ in declaration specifiers

	printf("Size of double data Type: %d \n",sizeof(double));
	printf("Size of long double : %d \n",sizeof(long double));  // long double is not supported in gcc compilers. 
	//printf("Size of short double : %d \n",sizeof(short double)); // error C2632: 'short' followed by 'double' is illegal
	//printf("Size of long long double : %d \n",sizeof(long long double)); //error C2632: '__int64' followed by 'double' is illegal

	printf("Size of void data Type: %d \n",sizeof(void)); // warning C4034: sizeof returns 0
	//printf("Size of long void : %d \n",sizeof(long void)); //error C2632: 'long' followed by 'void' is illegal
	//printf("Size of short void : %d \n",sizeof(short void)); // error C2632: 'short' followed by 'void' is illegal

	//getch(); //linux -- implicit declaration of function ‘getch’; did you mean ‘getc’
	getc(stdin);
	

	return 0;
}



/****************OUTPUT LINUX***************
gcc compiler

Size of integer data Type: 4 
Size of long int : 8 
Size of short int : 2 
Size of Float data Type: 4 
Size of char data Type: 1 
Size of double data Type: 8 
Size of long double : 16 
Size of void data Type: 1 


/****************OUTPUT WINDOWS***************

 Microsoft C++ compiler (cl.exe)

Size of integer data Type: 4
Size of long int : 4
Size of long long int : 8
Size of short int : 2
Size of Float data Type: 4
Size of long float : 8
Size of char data Type: 1
Size of double data Type: 8
Size of long double : 8
Size of void data Type: 0

*************************************/