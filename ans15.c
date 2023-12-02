//Write a C program to calculate product of digits of a number.
#include<stdio.h>
void main()
{
	int n,sum=1,rem;
	printf("Enter the number :");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum*rem;
		n=n/10;
		
	}
	printf("product = %d",sum);
}