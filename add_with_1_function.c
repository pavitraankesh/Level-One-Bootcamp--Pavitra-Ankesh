//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
	float a, b, sum;
	printf("Input\nEnter number: \n");	
	scanf("%f",&a);
	printf("Enter number: \n");
	scanf("%f",&b);
	sum=a+b;
	printf("Output\nSum of %f and %f is %f.\n",a,b,sum);
	return 0;
}

