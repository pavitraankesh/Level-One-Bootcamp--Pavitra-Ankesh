//Write a program to add two user input numbers using one function.
#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int a, b, sum;
	printf("Input\nEnter number: ");	
	scanf("%d",&a);
	printf("Enter number: ");
	scanf("%d",&b);
	sum=add(a,b);
	printf("Output\nSum of %d and %d is %d.",a,b,sum);
	return 0;
}
