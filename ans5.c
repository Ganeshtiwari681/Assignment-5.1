//Write a C program to print all odd number between 1 to 100.
#include<stdio.h>
void main()
{
	int odd=1;
	while(odd<101)
	{
		if(odd%2!=0)
		printf("%d\n",odd);
		odd++;
	}
}