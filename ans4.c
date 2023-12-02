//Write a C program to print all even numbers between 1 to 100. - using while loop
#include<stdio.h>
void main()
{
	int n=1;
	while(n<101)
	{  
	    if(n%2==0)
     	printf("\n%d",n);
		n++;
	}
}