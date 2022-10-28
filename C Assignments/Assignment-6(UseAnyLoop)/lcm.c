// Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter Two +ve Number in order to find LCM:");
    scanf("%d%d",&a,&b);
    for ( i = a>b?a:b; i < (a*b); i=i+(a>b?a:b))
    {
        if(i%a==0 && i%b==0)
        break;
    }
    printf("The LCM is %d",i);
    return 0;
}