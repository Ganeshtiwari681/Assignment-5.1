//Write a C program to print all natural numbers from 1 to n. - using while loop.
#include<stdio.h>
void main()
{
	int n=1,size;
	printf("enter the nth natural number to print :");
	scanf("%d",&size);
	while(n<=size)
	{
		
		printf("\n%d",n);
		n++;
	}
}