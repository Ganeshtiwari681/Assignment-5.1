//Write a C program to find sum of first and last digit of a number.
#include<stdio.h>
void main()
{
	int n,count=1,digit,sum;
	int first;
	printf("enter the number :");
	scanf("%d",&n);
	int last=n%10;
	while(n!=0)
	{
	   first=n%10;
		digit=n;
		n=n/10;
	}
		
			printf("first digit =%d\nlast digit = %d\n",first,last);
	sum=last+first;
	printf("sum=%d",sum);
}