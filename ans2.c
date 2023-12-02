//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
main()
{
	int size;
	printf("enter the natural number in reverse :");
	scanf("%d",&size);
	int n=size;
	while(n>0)
	{
		printf("%d\n",n);
		n--;
	}
}