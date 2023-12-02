//Write a C program to print all alphabets from a to z. - using while loop.
#include<stdio.h>
void main()
{
	char ch='a';
	while(ch<='z')
	{
		printf("\n%c",ch);
		ch++;
	}
}