//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int get_n()
{
	  int n;
	  printf("Enter the number of elements n to be added: \n");
	  scanf("%d",&n);
	  return n;
}
void read_numbers(int n, float array[n])
{
	  for(int i=0;i<n;i++)
	  {
	    	printf("Enter element %d:\n",i+1);
		scanf("%f",&array[i]);
	  }
}
float compute_sum(int n, float array[n])
{
	  float sum=0;
	  for(int i=0;i<n;i++)
	  {
		sum=sum+array[i];
	  }
	  return sum;
}
void display_sum(int n, float array[n], float sum)
{
	  printf("The sum ");
	  for(int i=0;i<n-1;i++)
	  {
		 printf("%.2f + ", array[i]);
	  }
	  printf("%.2f is: %.2f.\n",array[n-1],sum);
}
int main()
{
	  int n;
	  n=get_n();
	  float array[n], sum;
	  read_numbers(n, array);
	  sum=compute_sum(n,array);
	  display_sum(n,array,sum);
	  return 0;
}
