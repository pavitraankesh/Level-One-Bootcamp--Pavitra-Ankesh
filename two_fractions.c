//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct
{
    int n;
    int d;
}fraction;
fraction read_values(int n)
{
    fraction x;
    printf("Enter the numerator for fraction %d:\n",n);
    scanf("%d",&x.n);
    printf("Enter the denominator for fraction %d:\n",n);
    scanf("%d",&x.d);
    return x;
}
fraction compute_sum(fraction f1, fraction f2)
{
    fraction sum;
    sum.n=(f1.n*f2.d)+(f2.n*f1.d);
    sum.d=f1.d*f2.d;
    return sum;
}
fraction simplify(fraction sum)
{
    int smaller=sum.n;
    if (sum.n>sum.d)
    {
        smaller=sum.d;
    }
    int i=smaller;
    while(i>1)
    {
        if(sum.n%i==0&&sum.d%i==0)
        {
            sum.n=sum.n/i;
            sum.d=sum.d/i;
            break;
        }
        i--;
    }
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
    sum=simplify(sum);
    display_sum(f1,f2,sum);
    return 0;
}
