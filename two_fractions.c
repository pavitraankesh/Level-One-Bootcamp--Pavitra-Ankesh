//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct
{
	int n;
	int d;
} fraction;
fraction read_values(int n)
{
	fraction x;
	printf("Enter the numerator for fraction %d:\n",n);
	scanf("%d",&x.n);
	printf("Enter the denominator for fraction %d:\n",n);
	scanf("%d",&x.d);
	return x;
}
int get_gcd(int a, int b)
{
    	int temp;
	while (a!=0)
	{
	    	temp=a;
	    	a=b%a;
	    	b=temp;
	}
	return b;
}
fraction simplify(fraction sum)
{
	int gcd=get_gcd(sum.n,sum.d);
	sum.n=sum.n/gcd;
	sum.d=sum.d/gcd;
	return sum;
}
fraction compute_sum(fraction f1, fraction f2)
{
    	fraction sum;
    	sum.n=(f1.n*f2.d)+(f2.n*f1.d);
    	sum.d=f1.d*f2.d;
	sum=simplify(sum);
    	return sum;
}
void display_sum(fraction f1, fraction f2, fraction sum)
{
	printf("The sum of %d/%d and %d/%d is: %d/%d.\n",f1.n,f1.d,f2.n,f2.d,sum.n,sum.d);
}
int main()
{
	fraction f1,f2,sum;
	f1=read_values(1);
	f2=read_values(2);
	sum=compute_sum(f1,f2);
	display_sum(f1,f2,sum);
	return 0;
}
