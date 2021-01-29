//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
typedef struct 
{
	float x;
	float y;
}Coordinates;
Coordinates read_values(int n)
{
	Coordinates i;
	printf("Enter the x coordinate of point %d\n",n);
	scanf("%f",&i.x);
	printf("Enter the y coordinate of point %d\n",n);
	scanf("%f",&i.y);
	return i;
}
float compute_distance(Coordinates p1, Coordinates p2)
{
	float dist;
	dist = sqrt( (pow((p2.x-p1.x),2))+(pow((p2.y-p1.y),2)));
	return dist;
}
void display_distance(Coordinates p1, Coordinates p2, float dist)
{
	printf("The distance between %.2f, %.2f and %.2f,%.2f is: %.2f\n", p1.x, p1.y, p2.x, p2.y, dist);
}
int main()
{
	Coordinates p1,p2;
	float dist;
	p1=read_values(1);
	p2=read_values(2);
	dist=compute_distance(p1,p2);
	display_distance(p1,p2,dist);
	return 0;
}
