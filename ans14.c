//Write a C program to calculate sum of digits of a number.
#include<stdio.h>
void main()
{
   	int n,sum=0,rem;
	printf("enter the number :");
	scanf("%d",&n);
	while(n!=0)
	{
	   rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum of digit :%d",sum);
}