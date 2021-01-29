//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
	int a, b, sum;
	printf("Input\nEnter number: \n");	
	scanf("%d",&a);
	printf("Enter number: \n");
	scanf("%d",&b);
	sum=a+b;
	printf("Output\nSum of %d and %d is %d.\n",a,b,sum);
	return 0;
}
