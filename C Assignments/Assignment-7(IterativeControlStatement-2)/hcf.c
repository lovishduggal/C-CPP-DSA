// Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter Two +ve Number in order to find HCF:");
    scanf("%d%d",&a,&b);
    for ( i = a<b?a:b; i>1; i--)
    {
        if(a%i==0 && b%i==0)
        break;
    }
    printf("The LCM is %d",i);
    return 0;
}