//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float readvalue(char i) //function 1
{
	float x;
	printf("Enter the value of %c:\n",i);
	scanf("%f",&x);
	return x;
}
float computevol(float b, float d, float h) //function 2
{
	float vol;
	vol= ((h*d)+d)/(3*b);
	return vol;
}
void displayvol(float vol) //function 3
{
	printf("Volume: %f\n",vol);
}
int main() //function 4
{
	float h,d,b,vol;
	h=readvalue('h');
	d=readvalue('d');
	b=readvalue('b');
	vol=computevol(b,d,h);
	displayvol(vol);
	return 0;
}
