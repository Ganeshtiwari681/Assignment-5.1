//Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
void main()
{   int l,sum=0,n=1;
	printf("enter the nth term :");
	scanf("%d",&l);
	while(n<=l)
	{
		sum=sum+n;
		n++;
	}
	printf("sum=%d",sum);
}