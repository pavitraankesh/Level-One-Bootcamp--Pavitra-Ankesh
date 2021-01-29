//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float read_value(char i, int n)  //function 1
{
	float c;
	printf("Enter the %c coordinate of point %d\n",i,n);
	scanf("%f",&c);
}
float compute_distance(float x1, float x2, float y1, float y2)  //function2
{
	float dist;
	dist = sqrt( (pow((x2-x1),2))+(pow((y2-y1),2)));
	return dist;
}
void display_distance(float x1, float x2, float y1, float y2, float dist)  //function 3
{
	printf("The distance between %.2f, %.2f and %.2f,%.2f is: %.2f\n", x1,y1,x2,y2,dist);
}
int main()  //function 4
{
	float x1,x2,y1,y2,dist;
	x1=read_value('x',1);
	x2=read_value('x',2);
	y1=read_value('y',1);
	y2=read_value('y',2);
	dist=compute_distance(x1,x2,y1,y2);
	display_distance(x1,x2,y1,y2,dist);
	return 0;
}

