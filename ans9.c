//Write a C program to print multiplication table of any number.
#include<stdio.h>
void main()
{
	int n,i=1;
	printf("enter the number :");
	scanf("%d",&n);
	while(i<11)
	{   
		printf("\n%dx%d = %d",n,i,n*i);
		i++;
	}
}