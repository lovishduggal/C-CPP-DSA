// Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b,result;
    printf("Enter two +ve Numbers:");
    scanf("%d%d",&a,&b);
    result=hcf(a,b);
    printf("The HCF is %d",result);
}
int hcf(int a,int b)
{
    int i;
    for ( i=a<b?a:b; i>1; i--)
    {
       if(a%i==0 && b%i==0)
       return i;
    }
}