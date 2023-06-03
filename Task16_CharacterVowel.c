/***************************************************************
Program to find if Entered charater is vowel or not
using switch statemets

Created By: Tarunya Raj
Date      : 03/June/2023
****************************************************************/

#include<stdio.h>

int main (void)
{
	char chVowel;
	printf("\nEnter alphabet");
	scanf("%c",&chVowel);
	switch (chVowel)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		printf("\nEntered character is capital vowel\n");
			break;
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("\nEntered character is small vowel\n");
			break;
	default:
		printf("\nNot a vowel\n");



	}


	return 0;
}