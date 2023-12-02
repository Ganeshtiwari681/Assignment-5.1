//Write a C program to count number of digits in a number.
#include<stdio.h>
main()
{
	int n,count=1;
	printf("enter the number :");
	scanf("%d",&n);
	while(n/10!=0)
	{
		n=n/10;
	    //n=n/10;
		count++;
		//printf("\ncounhdt=%d",count);
	}
	printf("\n number of digit =%d",count);
}