//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
	float h,b,d,vol;
	printf("Enter value of h: \n");
	scanf("%f",&h);
	printf("Enter value of b: \n");
	scanf("%f",&b);
	printf("Enter value of d: \n");
	scanf("%f",&d);
	vol=((h*d)+d)/(3*b);
	printf("Volume: %f\n",vol);
	return 0;
}
