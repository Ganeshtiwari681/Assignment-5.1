//Write a C program to find first and last digit of a number.
#include<stdio.h>
int main()
{
	int n,count=1,digit;
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
		
			printf("first digit =%d\nlast digit = %d",first,last);
	
}
  