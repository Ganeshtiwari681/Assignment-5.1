//Write a C program to swap first and last digits of a number.
#include<stdio.h>
int main()
{
	int n,count=1,digit;
	int first,last,temp;
	printf("enter the number :");
	scanf("%d",&n);
    last=n%10;
	while(n!=0)
	{
	   first=n%10;
		digit=n;
		n=n/10;
	}
		printf("\nbefore swapping");
		printf("\nfirst digit =%d\nlast digit = %d",first,last);
	    temp=last;
	    last=first;
	    first=temp;
	    printf("\nafter swapping");
	    
	    printf("\nfirst digit =%d\nlast digit = %d",first,last);
	    
}