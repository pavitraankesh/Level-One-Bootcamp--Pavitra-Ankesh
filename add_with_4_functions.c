//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
float readnum()
{
	float x;
	printf("Enter a number: \n");
	scanf("%f",&x);
	return x;
}
float computesum(float a,float b)
{
	return a+b;
}
void displayresult(float a, float b, float res)
{
	printf("The sum of %f and %f is: %f\n",a,b,res);
}
int main()
{
	float a,b,res;
	a=readnum();
	b=readnum();
	res=computesum(a,b);
	displayresult(a,b,res);
	return 0;
}
