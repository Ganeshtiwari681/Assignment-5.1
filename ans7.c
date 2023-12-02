//Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
void main()
{
	int n=1,l,sum=0;
	printf("enter the nth term =");
	scanf("%d",&l);
	while(n<l)
	{
		if(n%2==0)
		sum=sum+n;
		n++;
	}
	printf("sum = %d",sum);
}